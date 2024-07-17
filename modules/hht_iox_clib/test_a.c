#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "iceoryx_wrapper.h"
#include <signal.h>
#include <stdbool.h>
#include <unistd.h>

bool is_shutdown = false;
void stop_handler(int signal) {
    is_shutdown = true;
}

void setup_signal_handlers() {
    signal(SIGINT, stop_handler);
    signal(SIGTERM, stop_handler);
}

void *send_thread(void *arg) {
    for (int i = 0; i < 255 && !is_shutdown; ++i) {
        SendEvt(1, 1);
        usleep(1000 * 1000); // sleep for 1 second
    }

    return NULL;
}

void *receive_thread(void *arg) {
    int evtID = 0;
    while (!is_shutdown) {
        WaitEvt(evtID, 1000);
    }
    return NULL;
}

int main() {
    setup_signal_handlers();
    pthread_t send_tid, recv_tid;

    if (pthread_create(&send_tid, NULL, send_thread, NULL) != 0) {
        fprintf(stderr, "Error creating send thread\n");
        exit(EXIT_FAILURE);
    }

    if (pthread_create(&recv_tid, NULL, receive_thread, NULL) != 0) {
        fprintf(stderr, "Error creating receive thread\n");
        exit(EXIT_FAILURE);
    }

    while (!is_shutdown) {
        sleep(10);
    }

    exit(0);
}