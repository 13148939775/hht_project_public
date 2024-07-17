/**
 * @file iceoryx_wrapper.h
 * @brief 
 * @author T001294
 * @version 1.0
 * @date 2023-12-23
 * 
 * @copyright Copyright (c) 2023  HRYT
 * 
 */
#ifndef ICEORYX_WRAPPER_H_
#define ICEORYX_WRAPPER_H_
#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 
 * @param  evtID            
 * @param  value            
 * @return int 
 */
int SendEvt(const int evtID, const int value);

/**
 * @brief 
 * @param  evtID            
 * @param  timeout          Milliseconds
 * @return int 
 */
int WaitEvt(const int evtID, const int timeout);

#ifdef __cplusplus
}
#endif

#endif //ICEORYX_WRAPPER_H_