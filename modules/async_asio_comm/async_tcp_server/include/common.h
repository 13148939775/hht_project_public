/**
 * @file common.h
 * @brief
 * @author T001294
 * @version 1.0
 * @date 2024-05-16
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __COMMON_H__
#define __COMMON_H__

#include <iomanip>
#include <cstddef>
#include <string>

#include <boost/asio.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid_generators.hpp>

typedef boost::system::error_code b_ec;

#if 0
#ifndef USE_IOSERVICE_POOL
#define USE_IOSERVICE_POOL
#endif // USE_IOSERVICE_POOL
#endif

#if 1
#ifndef USE_IOTHREAD_POOL
#define USE_IOTHREAD_POOL
#endif // USE_IOTHREAD_POOL
#endif

#endif // __COMMON_H__