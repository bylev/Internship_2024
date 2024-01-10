/*
 * STM32407.h
 *
 *  Created on: Jan 9, 2024
 *      Author: Michelle Cámara
 */

#ifndef STM32407_H_
#define STM32407_H_

//Define outputs and turning leds.

#define 	INPUT 		0UL
#define 	OUTPUT		1UL
#define 	ALTERNATE	2UL //10
#define 	ANALOG		3UL
#define 	ON			1UL
#define		OFF  		0UL





// Structure RCC

/* ---------------------------------- */
/*	RCC AHB1 CLOCK ENABLE REGISTER	  */
/* ---------------------------------- */

typedef struct{

	uint32_t	GPIOAEN			:1;
	uint32_t	GPIOBEN			:1;
	uint32_t	GPIOCEN			:1;
	uint32_t	GPIODEN			:1;
	uint32_t	GPIOEEN			:1;
	uint32_t	GPIOFEN			:1;
	uint32_t	GPIOGEN			:1;
	uint32_t	GPIOHEN			:1;
	uint32_t	GPIOIEN			:1;
	uint32_t	Reserved1		:3;
	uint32_t	Reserved2		:5;
	uint32_t	BKPSRAMEN		:1;
	uint32_t	Res				:1;
	uint32_t	CCMDATARAMEN	:1;
	uint32_t	DMA1EN			:1;
	uint32_t	DMA2EN			:1;
	uint32_t	Reserved3		:2;
	uint32_t	ETHMACEN		:1;
	uint32_t	ETHMACTXEN		:1;
	uint32_t	ETHMACPTP		:1;
	uint32_t	OTGHSEN			:1;
	uint32_t	OTGHSULPIEN		:1;
	uint32_t	Reserved4		:1;

}RCC_AHB1ENR_t;

RCC_AHB1ENR_t RCC;

/* ---------------------------------- */
/*		  GPIO MODER REGISTER		  */
/* ---------------------------------- */

typedef struct{
	uint32_t	MODER0			:2;
	uint32_t	MODER1			:2;
	uint32_t	MODER2			:2;
	uint32_t	MODER3			:2;
	uint32_t	MODER4			:2;
	uint32_t	MODER5			:2;
	uint32_t	MODER6			:2;
	uint32_t	MODER7			:2;
	uint32_t	MODER8			:2;
	uint32_t	MODER9			:2;
	uint32_t	MODER10			:2;
	uint32_t	MODER11			:2;
	uint32_t	MODER12			:2;
	uint32_t	MODER13			:2;
	uint32_t	MODER14			:2;
	uint32_t	MODER15			:2;
}GPIOx_MODER_t;

GPIOx_MODER_t GPIOx_MODER;

/* ---------------------------------- */
/*		  GPIO PORT OUTPUT DATA 	  */
/* ---------------------------------- */

typedef struct{
	uint32_t 	pin_0			:1;
	uint32_t 	pin_1			:1;
	uint32_t 	pin_2			:1;
	uint32_t 	pin_3			:1;
	uint32_t 	pin_4			:1;
	uint32_t 	pin_5			:1;
	uint32_t 	pin_6			:1;
	uint32_t 	pin_7			:1;
	uint32_t 	pin_8			:1;
	uint32_t 	pin_9			:1;
	uint32_t 	pin_10			:1;
	uint32_t 	pin_11			:1;
	uint32_t 	pin_12			:1;
	uint32_t 	pin_13			:1;
	uint32_t 	pin_14			:1;
	uint32_t 	pin_15			:1;
	uint32_t 	Reserved		:16;

}GPIOx_ODR_t;

GPIOx_ODR_t GPIO_ODR;



#endif /* STM32407_H_ */
