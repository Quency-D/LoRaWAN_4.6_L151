/*!
 * \file      Commissioning.h
 *
 * \brief     End-device commissioning parameters
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2020 Semtech
 *
 * \endcode
 */
#ifndef __COMMISSIONING_H__
#define __COMMISSIONING_H__

#ifdef __cplusplus
extern "C" {
#endif

/*!
 ******************************************************************************
 ********************************** WARNING ***********************************
 ******************************************************************************
 
 The LoRaWAN AES128 keys are stored and provisionned on secure-elements.
 
 This project providdes a software emulated secure-element.
 The LoRaWAN AES128 keys SHALL be updated under 
 src/peripherals/<secure-element name>-se\se-identity.h file.

 ******************************************************************************
 ******************************************************************************
 ******************************************************************************
 */
#include "se-identity.h"

/*!
 * When set to 1 the application uses the Over-the-Air activation procedure
 * When set to 0 the application uses the Personalization activation procedure
 */
#define OVER_THE_AIR_ACTIVATION                            1

/*!
 * When using ABP activation the MAC layer must know in advance to which server
 * version it will be connected.
 */
#define ABP_ACTIVATION_LRWAN_VERSION_V10x                  0x01000400 // 1.0.4.0
#define ABP_ACTIVATION_LRWAN_VERSION_V11x                  0x01010100 // 1.1.1.0

#define ABP_ACTIVATION_LRWAN_VERSION                       ABP_ACTIVATION_LRWAN_VERSION_V11x

/*!
 * Indicates if the end-device is to be connected to a private or public network
 */
#define LORAWAN_PUBLIC_NETWORK                             true

/*!
 * Current network ID
 */
#define LORAWAN_NETWORK_ID                                 ( uint32_t )0
/*
// #define REGION_CN470 
// Setup regions
#ifdef REGION_AS923
#define ACTIVE_REGION LORAMAC_REGION_AS923

#elif defined REGION_AU915
#define ACTIVE_REGION LORAMAC_REGION_AU915

#elif defined REGION_CN470
#define ACTIVE_REGION LORAMAC_REGION_CN470

#elif defined REGION_CN779
#define ACTIVE_REGION LORAMAC_REGION_CN779

#elif defined REGION_EU433
#define ACTIVE_REGION LORAMAC_REGION_EU433

#elif defined REGION_EU868
#define ACTIVE_REGION LORAMAC_REGION_EU868

#elif defined REGION_KR920
#define ACTIVE_REGION LORAMAC_REGION_KR920

#elif defined REGION_IN865
#define ACTIVE_REGION LORAMAC_REGION_IN865

#elif defined REGION_US915
#define ACTIVE_REGION LORAMAC_REGION_US915

#elif defined REGION_RU864
#define  ACTIVE_REGION LORAMAC_REGION_RU864

#else
#warning "No active region defined, LORAMAC_REGION_CN470 will be used as default."
#define ACTIVE_REGION LORAMAC_REGION_CN470
#endif
*/
#define ACTIVE_REGION LORAMAC_REGION_CN470

#ifdef __cplusplus
}
#endif

#endif // __COMMISSIONING_H__
