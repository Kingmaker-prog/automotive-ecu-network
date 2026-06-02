#include "main.h"
#include "uart_driver.h"
#include <string.h>

extern UART_HandleTypeDef huart1;

void UART_Init(void)
{
    /* Empty for now */
}

void UART_SendByte(uint8_t data)
{
    HAL_UART_Transmit(&huart1,
                      &data,
                      1,
                      100);
}

void UART_SendString(const char *str)
{
    HAL_UART_Transmit(&huart1,
                      (uint8_t *)str,
                      strlen(str),
                      100);
}

uint8_t UART_ReceiveByte(void)
{
    uint8_t data;

    HAL_UART_Receive(&huart1,
                     &data,
                     1,
                     HAL_MAX_DELAY);

    return data;
}
