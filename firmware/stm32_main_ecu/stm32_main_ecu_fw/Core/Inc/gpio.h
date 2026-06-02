#ifndef GPIO_H
#define GPIO_H

#include "main.h"

typedef enum
{
    GPIO_LOW = 0,
    GPIO_HIGH
}GPIO_State_t;

void GPIO_WritePin(GPIO_TypeDef *port,
                   uint16_t pin,
                   GPIO_State_t state);

GPIO_State_t GPIO_ReadPin(GPIO_TypeDef *port,
                          uint16_t pin);

void GPIO_TogglePin(GPIO_TypeDef *port,
                    uint16_t pin);

#endif
