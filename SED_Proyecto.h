/*
 * SED_Proyecto.h
 *
 *  Created on: Dec 17, 2025
 *      Author: HP
 */

#ifndef INC_SED_PROYECTO_H_
#define INC_SED_PROYECTO_H_

#include "stm32f4xx_hal.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "i2c-lcd.h"


/************************************************************************************************
 * 																								*
 * 										HARDWARE							 					*
 * 																								*
 * 																								*
 ************************************************************************************************/

/************************************************************************************************
 * 																								*
 * 										DIRECCIONES												*							*
 *																								*
 ************************************************************************************************/
/* DECODIFICADOR A*/

/*GPIOB*/
#define SED_A0 GPIO_PIN_1

/*GPIOB*/
#define SED_A1 GPIO_PIN_15

/*GPIOB*/
#define SED_A2 GPIO_PIN_14

/*GPIOB*/
#define SED_A3 GPIO_PIN_13

/* DECODIFICADOR B*/

/*GPIOB*/
#define SED_B0 GPIO_PIN_10

/*GPIOC*/
#define SED_B1 GPIO_PIN_12

/*GPIOC*/
#define SED_B2 GPIO_PIN_11

/*GPIOC*/
#define SED_B3 GPIO_PIN_10

/* LEDS*/

/*GPIO A*/
#define SED_LED_ROJO GPIO_PIN_10
/*GPIO A*/
#define SED_LED_AZUL GPIO_PIN_12
/*GPIO A*/
#define SED_LED_VERDE GPIO_PIN_11

/* INPUTS*/

/*GPIOA*/
#define SED_JO GPIO_PIN_6

/*GPIOA*/
#define SED_J1 GPIO_PIN_7

/*GPIOC*/
#define SED_LISTO GPIO_PIN_8

/*BUZZER*/

/*GPIOB*/
#define SED_BUZZER GPIO_PIN_6
/************************************************************************************************
 * 																								*
 * 										FUNCIONES												*							*
 *																								*
 ************************************************************************************************/

/* DECODIFICADOR A*/
void SED_SET_A0(void);
void SED_SET_A1(void);
void SED_SET_A2(void);
void SED_SET_A3(void);
void SED_RESET_A0(void);
void SED_RESET_A1(void);
void SED_RESET_A2(void);
void SED_RESET_A3(void);
void SED_RESET_A(void);
void SED_Numero_A(uint8_t numero);

/* DECODIFICADOR B*/
void SED_SET_B0(void);
void SED_SET_B1(void);
void SED_SET_B2(void);
void SED_SET_B3(void);
void SED_RESET_B0(void);
void SED_RESET_B1(void);
void SED_RESET_B2(void);
void SED_RESET_B3(void);
void SED_RESET_B(void);
void SED_Numero_B(uint8_t numero);

/* LEDS*/

void SED_SET_LED_ROJO(void);
void SED_SET_LED_AZUL(void);
void SED_SET_LED_VERDE(void);
void SED_RESET_LED_ROJO(void);
void SED_RESET_LED_AZUL(void);
void SED_RESET_LED_VERDE(void);

/*BUZZER*/

void SED_SET_BUZZER(void);
void SED_RESET_BUZZER(void);

/************************************************************************************************
 * 																								*
 *											TIMER												*
 *																								*
 ************************************************************************************************/

void SED_TemporizaciÃ³n(uint16_t tiempo);

/************************************************************************************************
 * 																								*
 *											ADC													*
 *																								*
 ************************************************************************************************/

uint32_t SED_ADC_Semilla(void);


/************************************************************************************************
 * 																								*
 *										USART													*
 *																								*
 ************************************************************************************************/

/************************************************************************************************
 * 																								*
 * 										ESTADOS													*
 *																								*
 ************************************************************************************************/
#define SED_OK 0

#define SED_POR_DEFECTO -1
#define SED_MODO_1 1
#define SED_MODO_2 2
#define SED_MODO_3 3
#define SED_MODO_4 4

typedef struct{
	int8_t modo;
	uint8_t rondasElegidas;
	int print;

} hjuego;

typedef struct{
	int8_t ganador;
	float tiempoJ1[4];
	float tiempoJ2[4];
	uint8_t puntosJ1;
	uint8_t puntosJ2;
	uint8_t mejorTiempoJ1;
	uint8_t mejorTiempoJ2;
} hjugadores;
/************************************************************************************************
 * 																								*
 * 										FUNCIONES												*
 *																								*
 ************************************************************************************************/
void SED_USART_Interface(void);
int SED_USART_Modos(char uartBuffer[]);
void SED_USART_Inicio_Juego(void);
void SED_USART_Eleccion_Rondas(void);
void SED_USART_Rondas_Elegidas(uint8_t rondasElegidas);
void SED_USART_Error_Rondas(void);
uint8_t SED_USART_Numero_Rondas(char uartBuffer[]);
void SED_USART_Puestos(void);
void SED_USART_Winner(hjugadores jugadores);
hjuego SED_USART_SwitchMenu(hjuego hj);

/************************************************************************************************
 * 																								*
 *										FUNCIONES LOGICAS										*
 *																								*
 ************************************************************************************************/
/************************************************************************************************
 * 																								*
 * 										VARIABLES												*
 *																								*
 ************************************************************************************************/



#define SED_CCR_MAX 49999
#define SED_CCR_MIN 9999

/************************************************************************************************
 * 																								*
 * 										FUNCIONES												*
 *																								*
 ************************************************************************************************/
hjugadores SED_Comprobaciones(hjugadores jugadores,uint8_t rondas);
hjugadores SED_Modo_1(uint8_t rondas,hjugadores jugadores);
hjugadores SED_Modo_2(uint8_t rondas,hjugadores jugadores);
hjugadores SED_Modo_3(uint8_t rondas,hjugadores jugadores);
hjugadores SED_Modo_4(uint8_t rondas,hjugadores jugadores);


#endif /* INC_SED_PROYECTO_H_ */
