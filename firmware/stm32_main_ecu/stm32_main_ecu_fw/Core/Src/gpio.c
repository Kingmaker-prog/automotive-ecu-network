#include "gpio.h"

void GPIO_WritePin(GPIO_TypeDef *port,
                   uint16_t pin,
                   GPIO_State_t state)
{
    HAL_GPIO_WritePin(port,
                      pin,
                      (GPIO_PinState)state);
}

GPIO_State_t GPIO_ReadPin(GPIO_TypeDef *port,
                          uint16_t pin)
{
    return (GPIO_State_t)
           HAL_GPIO_ReadPin(port, pin);
}

void GPIO_TogglePin(GPIO_TypeDef *port,
                    uint16_t pin)
{
    HAL_GPIO_TogglePin(port, pin);
}
