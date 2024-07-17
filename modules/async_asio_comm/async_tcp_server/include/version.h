/**
 * @file version.h
 * @brief 版本号
 * @author T001294
 * @version 1.0
 * @date 2024-07-17
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __VERSION_H__
#define __VERSION_H__

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define VERSION_MAJOR 1
#define VERSION_MINOR 0
#define VERSION_PATCH 0

#define VERSION "v" STR(VERSION_MAJOR) "." STR(VERSION_MINOR) "." STR(VERSION_PATCH)

#endif // __VERSION_H__