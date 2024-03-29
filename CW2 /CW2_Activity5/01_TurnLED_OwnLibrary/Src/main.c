/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "STM32f407.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
		RCC_AHB1ENR_t volatile *const pClockEN = (RCC_AHB1ENR_t*)RCC; // Base addres of the clock in the bus AHB1
		GPIOx_MODER_t volatile *const pPortDModeReg = (GPIOx_MODER_t*)DREG; // Base addres of my port D
		GPIOx_ODR_t   volatile *const pOutputD = (GPIOx_ODR_t*)OUTPUTD; //Base address of the mode of my port

		pClockEN ->GPIODEN = 1; // Setting bit to use the port D

		pPortDModeReg -> MODER15 = OUTPUT; // Setting bit as output mode
		pOutputD ->pin_15 = ON; // Turning on pin 15 
    /* Loop forever */
	for(;;);
}
