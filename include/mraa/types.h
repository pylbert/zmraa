/*
 * Author: Brendan Le Foll <brendan.le.foll@intel.com>
 * Copyright © 2014 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef __MRAA_TYPES_H__
#define __MRAA_TYPES_H__

/** @file
 *
 * This file defines the basic shared types for libmraa
 * this file is different to common.h in that swig takes this as an input
 */

#ifndef NULL
#define NULL ((void *)0)
#endif


#ifdef __cplusplus
extern "C" {
#endif

/**
 * MRAA boolean type
 * 1 For TRUE
 */
typedef uint8_t mraa_boolean_t;

/**
 * MRAA supported platform types
 */
typedef enum {
    MRAA_INTEL_ARDUINO_101 = 200,           /**< Arduino 101 */
    MRAA_INTEL_ARDUINO_101_SSS,             /**< Arduino 101 */
    MRAA_INTEL_D2000_CRB,                   /**< Quark D2K CRB */
    MRAA_INTEL_QUARK_SE_DEVBOARD,           /**< Quark SE Devboard/C1000 */
    MRAA_INTEL_QUARK_SE_SSS_DEVBOARD,       /**< Quark SE Devboard/C1000 */
    MRAA_UNKNOWN_PLATFORM =
   299 /**< An unknown platform type, typically will load INTEL_GALILEO_GEN1 */
} mraa_platform_t;


/**
 * MRAA return codes
 */
typedef enum {
    MRAA_SUCCESS = 0,                             /**< Expected response */
    MRAA_ERROR_FEATURE_NOT_IMPLEMENTED = 1,       /**< Feature TODO */
    MRAA_ERROR_FEATURE_NOT_SUPPORTED = 2,         /**< Feature not supported by HW */
    MRAA_ERROR_INVALID_VERBOSITY_LEVEL = 3,       /**< Verbosity level wrong */
    MRAA_ERROR_INVALID_PARAMETER = 4,             /**< Parameter invalid */
    MRAA_ERROR_INVALID_HANDLE = 5,                /**< Handle invalid */
    MRAA_ERROR_NO_RESOURCES = 6,                  /**< No resource of that type avail */
    MRAA_ERROR_INVALID_RESOURCE = 7,              /**< Resource invalid */
    MRAA_ERROR_INVALID_QUEUE_TYPE = 8,            /**< Queue type incorrect */
    MRAA_ERROR_NO_DATA_AVAILABLE = 9,             /**< No data available */
    MRAA_ERROR_INVALID_PLATFORM = 10,             /**< Platform not recognised */
    MRAA_ERROR_PLATFORM_NOT_INITIALISED = 11,     /**< Board information not initialised */
    MRAA_ERROR_PLATFORM_ALREADY_INITIALISED = 0,  /**< Board is already initialised, same as MRAA_SUCESS */

    MRAA_ERROR_UNSPECIFIED = 99 /**< Unknown Error */
} mraa_result_t;

/**
 * Enum representing different possible modes for a pin.
 */
typedef enum {
    MRAA_PIN_VALID = 0,     /**< Pin Valid */
    MRAA_PIN_GPIO = 1,      /**< General Purpose IO */
    MRAA_PIN_PWM = 2,       /**< Pulse Width Modulation */
    MRAA_PIN_FAST_GPIO = 3, /**< Faster GPIO */
    MRAA_PIN_SPI = 4,       /**< SPI */
    MRAA_PIN_I2C = 5,       /**< I2C */
    MRAA_PIN_AIO = 6,       /**< Analog in */
    MRAA_PIN_UART = 7       /**< UART */
} mraa_pinmodes_t;

/**
 * Enum reprensenting different i2c speeds/modes
 */
typedef enum {
    MRAA_I2C_STD = 0,  /**< up to 100Khz */
    MRAA_I2C_FAST = 1, /**< up to 400Khz */
    MRAA_I2C_HIGH = 2  /**< up to 3.4Mhz */
} mraa_i2c_mode_t;

typedef enum {
    MRAA_UART_PARITY_NONE = 0,
    MRAA_UART_PARITY_EVEN = 1,
    MRAA_UART_PARITY_ODD = 2,
    MRAA_UART_PARITY_MARK = 3,
    MRAA_UART_PARITY_SPACE = 4
} mraa_uart_parity_t;

#ifdef __cplusplus
}
#endif

#endif
