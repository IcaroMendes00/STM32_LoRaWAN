/*****************************************************************************************************
*   @file interfaces.h
*   @author Icaro Mendes
*   @board STM32H755ZI-Q (NUCLEO MB1363B)
*
*   @note Referencias:
*       RM0399 Reference manual
*       Material de aulas (Microprocessadores e Microcontroladores) - Prof. Dr. Fagner Araujo
*
*****************************************************************************************************
* Interfaces de comunicacao
****************************************************************************************************/

#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include "stm32h7xx_hal.h"

#define UART4_TX_Pin GPIO_PIN_0
#define UART4_TX_GPIO_Port GPIOA
#define UART4_RX_Pin GPIO_PIN_1
#define UART4_RX_GPIO_Port GPIOA
#define RED_LED_Pin GPIO_PIN_14
#define RED_LED_GPIO_Port GPIOB
#define USART1_RX_Pin GPIO_PIN_15
#define USART1_RX_GPIO_Port GPIOB
#define MCO2_Pin GPIO_PIN_9
#define MCO2_GPIO_Port GPIOC
#define USART1_TX_Pin GPIO_PIN_9
#define USART1_TX_GPIO_Port GPIOA

void Error_Handler(void);
void MX_GPIO_Init(void);
void MX_SPI1_Init(void);
void MX_UART4_Init(void);
void MX_USART1_UART_Init(void);

#endif /* INC_INTERFACE_H_ */
