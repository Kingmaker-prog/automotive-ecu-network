#ifndef UART_DRIVER_H
#define UART_DRIVER_H

#include <stdint.h>

void UART_Init(void);

void UART_SendByte(uint8_t data);

void UART_SendString(const char *str);

uint8_t UART_ReceiveByte(void);

#endif
