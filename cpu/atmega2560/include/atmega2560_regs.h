/*
 * Copyright (C) 2016 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     cpu_atmega2560
 * @{
 *
 * @file
 * @brief       CMSIS style register definitions for the atmega2560
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 */

#ifndef ATMEGA2560_REGS_H
#define ATMEGA2560_REGS_H

#include <avr/io.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Register types
 * @{
 */
#define REG8                    volatile uint8_t
#define REG16                   volatile uint16_t
/** @} */

/**
 * @brief   Timer register map
 */
typedef struct {
    REG8    CRA;            /**< control A */
    REG8    CRB;            /**< control B */
    REG8    CRC;            /**< control C */
    REG8    reserved;       /**< reserved */
    REG16   CNT;            /**< counter */
    REG16   ICR;            /**< input capture */
    REG16   OCR[3];         /**< output compare */
} mega_timer_t;

/**
 * @brief   UART register map
 */
typedef struct {
    REG8    CSRA;               /**< control and status register A */
    REG8    CSRB;               /**< control and status register B */
    REG8    CSRC;               /**< control and status register C */
    REG8    reserved;           /**< reserved */
    REG16   BRR;                /**< baud rate register */
    REG8    DR;                 /**< data register */
} mega_uart_t;

/**
 * @brief    Base register address definitions
 * @{
 */
#define MEGA_TIMER1_BASE        (uint16_t *)(&TCCR1A)
#define MEGA_TIMER3_BASE        (uint16_t *)(&TCCR3A)
#define MEGA_TIMER4_BASE        (uint16_t *)(&TCCR4A)
#define MEGA_TIMER5_BASE        (uint16_t *)(&TCCR5A)

#define MEGA_UART0_BASE         ((uint16_t *)(&UCSR0A))
#define MEGA_UART1_BASE         ((uint16_t *)(&UCSR1A))
#define MEGA_UART2_BASE         ((uint16_t *)(&UCSR2A))
#define MEGA_UART3_BASE         ((uint16_t *)(&UCSR2A))
/** @} */

/**
 * @brief    Peripheral instances
 * @{
 */
#define MEGA_TIMER1             ((mega_timer_t *)MEGA_TIMER1_BASE)
#define MEGA_TIMER3             ((mega_timer_t *)MEGA_TIMER3_BASE)
#define MEGA_TIMER4             ((mega_timer_t *)MEGA_TIMER4_BASE)
#define MEGA_TIMER5             ((mega_timer_t *)MEGA_TIMER5_BASE)

#define MEGA_UART0              ((mega_uart_t *)MEGA_UART0_BASE)
#define MEGA_UART1              ((mega_uart_t *)MEGA_UART1_BASE)
#define MEGA_UART2              ((mega_uart_t *)MEGA_UART2_BASE)
#define MEGA_UART3              ((mega_uart_t *)MEGA_UART3_BASE)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* ATMEGA2560_REGS_H */
/** @} */
