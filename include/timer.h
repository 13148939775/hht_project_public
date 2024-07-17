#ifndef _TIMER_H_
#define _TIMER_H_

#include <sys/time.h>

class CUseTime
{
public:
    CUseTime()
    {
        gettimeofday(&m_tv, NULL);
        m_start_time = m_tv.tv_sec * 1000 + m_tv.tv_usec / 1000; // ms
    }
    virtual ~CUseTime() {}

public:
    // 经过了多长时间
    long UseTime()
    {
        gettimeofday(&m_tv, NULL);
        return m_tv.tv_sec * 1000 + m_tv.tv_usec / 1000 - m_start_time;
    }
    long long GetCurrentTime()
    {
        gettimeofday(&m_tv, NULL);
        return m_tv.tv_sec * 1000 + m_tv.tv_usec / 1000;
    }
    void Restart()
    {
        gettimeofday(&m_tv, NULL);
        m_start_time = m_tv.tv_sec * 1000 + m_tv.tv_usec / 1000; // ms
    }

private:
    struct timeval m_tv;
    long m_start_time;
};

#endif //_TIMER_H_
