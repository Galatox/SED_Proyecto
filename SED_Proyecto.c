/*
 * SED_Proyecto.c
 *
 *  Created on: Dec 17, 2025
 *      Author: HP
 */
#include "SED_Proyecto.h"
/************************************************************************************************
 * 																								*
 * 										FUNCIONES DE HARDWARE		 							*
 * 																								*
 * 																								*
 ************************************************************************************************/

/* DECODIFICADOR A*/

void SED_SET_A0(void){
	/*
	 * @brief: Setea el pin A0
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A0, GPIO_PIN_SET);
}
void SED_SET_A1(void){
	/*
	 * @brief: Setea el pin A1
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A1, GPIO_PIN_SET);
}
void SED_SET_A2(void){
	/*
	 * @brief: Setea el pin A2
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A2, GPIO_PIN_SET);
}
void SED_SET_A3(void){
	/*
	 * @brief: Setea el pin A3
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A3, GPIO_PIN_SET);
}
void SED_RESET_A0(void){
	/*
	 * @brief: Resetea el pin A0
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A0, GPIO_PIN_RESET);
}

void SED_RESET_A1(void){
	/*
	 * @brief: Resetea el pin A1
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A1, GPIO_PIN_RESET);
}

void SED_RESET_A2(void){
	/*
	 * @brief: Resetea el pin A2
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A2, GPIO_PIN_RESET);
}

void SED_RESET_A3(void){
	/*
	 * @brief: Resetea el pin A3
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A3, GPIO_PIN_RESET);
}

void SED_RESET_A(void){
	/*
	 * @brief: Pone todos los pines del decodificador A a 0
	 */
	HAL_GPIO_WritePin(GPIOB, SED_A0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, SED_A1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, SED_A2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, SED_A3, GPIO_PIN_RESET);
}

void SED_Numero_A(uint8_t numero){
	/*
	 * @brief: Imprime el numero introducido en el decodificador A
	 * @param numero: Numero introducido en el decodificador A
	 */
	switch (numero){
	case 0:
		SED_RESET_A();
		break;
	case 1:
		SED_SET_A0();
		SED_RESET_A1();
		SED_RESET_A2();
		SED_RESET_A3();
		break;
	case 2:
		SED_RESET_A0();
		SED_SET_A1();
		SED_RESET_A2();
		SED_RESET_A3();
		break;
	case 3:
		SED_SET_A0();
		SED_SET_A1();
		SED_RESET_A2();
		SED_RESET_A3();
		break;
	case 4:
		SED_RESET_A0();
		SED_RESET_A1();
		SED_SET_A2();
		SED_RESET_A3();
		break;
	case 5:
		SED_SET_A0();
		SED_RESET_A1();
		SED_SET_A2();
		SED_RESET_A3();
		break;
	case 6:
		SED_RESET_A0();
		SED_SET_A1();
		SED_SET_A2();
		SED_RESET_A3();
		break;
	case 7:
		SED_SET_A0();
		SED_SET_A1();
		SED_SET_A2();
		SED_RESET_A3();
		break;
	case 8:
		SED_RESET_A0();
		SED_RESET_A1();
		SED_RESET_A2();
		SED_SET_A3();
		break;
	case 9:
		SED_SET_A0();
		SED_RESET_A1();
		SED_RESET_A2();
		SED_SET_A3();
		break;
	}
	return;
}

/* DECODIFICADOR B*/

void SED_SET_B0(void){
	/*
	 * @brief: Setea el pin B0
	 */
	HAL_GPIO_WritePin(GPIOB, SED_B0, GPIO_PIN_SET);
}
void SED_SET_B1(void){
	/*
	 * @brief: Setea el pin B1
	 */
	HAL_GPIO_WritePin(GPIOC, SED_B1, GPIO_PIN_SET);
}
void SED_SET_B2(void){
	/*
	 * @brief: Setea el pin B2
	 */
	HAL_GPIO_WritePin(GPIOC, SED_B2, GPIO_PIN_SET);
}
void SED_SET_B3(void){
	/*
	 * @brief: Setea el pin B3
	 */
	HAL_GPIO_WritePin(GPIOC, SED_B3, GPIO_PIN_SET);
}

void SED_RESET_B0(void){
	/*
	 * @brief: Resetea el pin A0
	 */
	HAL_GPIO_WritePin(GPIOB, SED_B0, GPIO_PIN_RESET);
}

void SED_RESET_B1(void){
	/*
	 * @brief: Resetea el pin B1
	 */
	HAL_GPIO_WritePin(GPIOC, SED_B1, GPIO_PIN_RESET);
}

void SED_RESET_B2(void){
	/*
	 * @brief: Resetea el pin B2
	 */
	HAL_GPIO_WritePin(GPIOC, SED_B2, GPIO_PIN_RESET);
}

void SED_RESET_B3(void){
	/*
	 * @brief: Resetea el pin B3
	 */
	HAL_GPIO_WritePin(GPIOC, SED_B3, GPIO_PIN_RESET);
}

void SED_RESET_B(void){
	/*
	 * @brief: Pone todos los pines del decodificador B a 0
	 */
	HAL_GPIO_WritePin(GPIOB, SED_B0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, SED_B1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, SED_B2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, SED_B3, GPIO_PIN_RESET);
}

void SED_Numero_B(uint8_t numero){
	/*
	 * @brief: Imprime el numero introducido en el decodificador B
	 * @param numero: Numero introducido en el decodificador B
	 */
	switch (numero){
	case 0:
		SED_RESET_B();
		break;
	case 1:
		SED_SET_B0();
		SED_RESET_B1();
		SED_RESET_B2();
		SED_RESET_B3();
		break;
	case 2:
		SED_RESET_B0();
		SED_SET_B1();
		SED_RESET_B2();
		SED_RESET_B3();
		break;
	case 3:
		SED_SET_B0();
		SED_SET_B1();
		SED_RESET_B2();
		SED_RESET_B3();
		break;
	case 4:
		SED_RESET_B0();
		SED_RESET_B1();
		SED_SET_B2();
		SED_RESET_B3();
		break;
	case 5:
		SED_SET_B0();
		SED_RESET_B1();
		SED_SET_B2();
		SED_RESET_B3();
		break;
	case 6:
		SED_RESET_B0();
		SED_SET_B1();
		SED_SET_B2();
		SED_RESET_B3();
		break;
	case 7:
		SED_SET_B0();
		SED_SET_B1();
		SED_SET_B2();
		SED_RESET_B3();
		break;
	case 8:
		SED_RESET_B0();
		SED_RESET_B1();
		SED_RESET_B2();
		SED_SET_B3();
		break;
	case 9:
		SED_SET_B0();
		SED_RESET_B1();
		SED_RESET_B2();
		SED_SET_B3();
		break;
	}
	return;
}


/* LEDS*/

void SED_SET_LED_ROJO(void){
	/*
	 * @brief: Setea el LED ROJO
	 */
	HAL_GPIO_WritePin(GPIOA, SED_LED_ROJO, GPIO_PIN_SET);
	return;
}

void SED_SET_LED_AZUL(void){
	/*
	 * @brief: Setea el LED AZUL
	 */
	HAL_GPIO_WritePin(GPIOA, SED_LED_AZUL, GPIO_PIN_SET);
	return;
}

void SED_SET_LED_VERDE(void){
	/*
	 * @brief: Setea el LED VERDE
	 */
	HAL_GPIO_WritePin(GPIOA, SED_LED_VERDE, GPIO_PIN_SET);
	return;
}

void SED_RESET_LED_ROJO(void){
	/*
	 * @brief: Resetea el LED ROJO
	 */
	HAL_GPIO_WritePin(GPIOA, SED_LED_ROJO, GPIO_PIN_RESET);
	return;
}

void SED_RESET_LED_AZUL(void){
	/*
	 * @brief: Resetea el LED AZUL
	 */
	HAL_GPIO_WritePin(GPIOA, SED_LED_AZUL, GPIO_PIN_RESET);
	return;
}

void SED_RESET_LED_VERDE(void){
	/*
	 * @brief: Resetea el LED VERDE
	 */
	HAL_GPIO_WritePin(GPIOA, SED_LED_VERDE, GPIO_PIN_RESET);
	return;
}

/************************************************************************************************
 * 																								*
 * 										FUNCIONES DE USART			 							*
 * 																								*
 * 																								*
 ************************************************************************************************/

void SED_USART_Interface(void){
	/*
	 * @brief: Imprime el menu del juego
	 */
	extern UART_HandleTypeDef huart2;

	const char Menu[] = "Bienvenidos al juego de reaccion!\r\n\n"
			"Seleccione el modo de juego deseado:\r\n"
			"1- Estimulo visual (teclee: modo 1).\r\n"
			"2- Estimulo auditivo (teclee: modo 2).\r\n"
			"3- Nocion de tiempo (teclee: modo 3).\r\n"
			"4- Modo entrenamiento (1 jugador)(teclee: modo 4).\r\n";

	HAL_UART_Transmit(&huart2, (uint8_t*) Menu, strlen(Menu), 20);

}

int SED_USART_Modos(char uartBuffer[]){
	/*
	 * @brief: Hace la busqueda del modo que se introdujo USART.
	 * @param uartBuffer: Tiene el contenido que se mandó por la USART.
	 */
	extern int modo;
	extern UART_HandleTypeDef huart2;

	int y = 0;
	const char modo1[8] = "modo 1";
	const char modo2[8] = "modo 2";
	const char modo3[8] = "modo 3";
	const char modo4[8] = "modo 4";

	const char TX_Modo[24] = "Modo seleccionado: \r\n";
	char TX_modo[24]="";


	if((!strcmp(uartBuffer,modo1))){

		modo = SED_MODO_1;
		y = 1;
		sprintf(TX_modo, "Estimulo visual\r\n");
	}

	if((!strcmp(uartBuffer,modo2))){

		modo = SED_MODO_2;
		y = 1;
		sprintf(TX_modo ,"Estimulo auditivo\r\n");

	}
	if((!strcmp(uartBuffer,modo3))){

		modo = SED_MODO_3;
		y = 1;
		sprintf(TX_modo, "Nocion de tiempo\r\n");

	}
	if((!strcmp(uartBuffer,modo4))){

		modo = SED_MODO_4;
		y = 1;
		sprintf(TX_modo, "Entrenamiento\r\n");
	}
	if(y){
	HAL_UART_Transmit(&huart2, (uint8_t*) TX_Modo, strlen(TX_Modo), 20);
	HAL_UART_Transmit(&huart2, (uint8_t*) TX_modo, strlen(TX_modo), 20);
	}
	return y;
}

void SED_USART_Inicio_Juego(void){
	/*
	 * @brief: Interfaz del comienzo del juego
	 */
	extern UART_HandleTypeDef huart2;
	char Inicio[24] = "Inicio del juego en:\r\n ";

	HAL_UART_Transmit(&huart2, (uint8_t*) Inicio, strlen(Inicio), 20);

	TIM5->CR1 |= (1<<0);
	for(int i = 1; i<4;i++ ){
		sprintf(Inicio,"%ds\r\n",i);
		while((TIM5->SR & (1<<0)) == 0);
		HAL_UART_Transmit(&huart2, (uint8_t*) Inicio, strlen(Inicio), 20);
		TIM5->SR &= ~(1<<0);
	}

	TIM5->CR1 &= ~(1<<0);
	sprintf(Inicio,"GO");
	HAL_UART_Transmit(&huart2, (uint8_t*) Inicio, strlen(Inicio), 20);
}


