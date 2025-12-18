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

void SED_SET_BUZZER(void){
	/*
	 * @brief: Setea el buzzer
	 */

	HAL_GPIO_WritePin(GPIOB, SED_BUZZER, GPIO_PIN_SET);
	return;
}
void SED_RESET_BUZZER(void){
	/*
	 * @brief: Setea el buzzer
	 */

	HAL_GPIO_WritePin(GPIOB, SED_BUZZER, GPIO_PIN_RESET);
	return;
}
/************************************************************************************************
 * 																								*
 *											FUNCIONES TIMERS									*
 *																								*
 ************************************************************************************************/

void SED_Temporización(uint16_t tiempo){
	//Tu = 0.1 ms
		TIM5->ARR = tiempo;
		TIM5->CR1 |= (1<<0);
		while((TIM5->SR & (1<<0)) == 0);
		TIM5->SR &= ~(1<<0);
		TIM5->CR1 &= ~(1<<0);
}
/************************************************************************************************
 * 																								*
 *											FUNCIONES ADC										*
 *																								*
 ************************************************************************************************/

uint32_t SED_ADC_Semilla(void){
	extern ADC_HandleTypeDef hadc1;

	uint32_t valor = 0;
	HAL_ADC_Start_IT(&hadc1);

	while((ADC1->SR & (1<<1)) == 0);
	valor = ADC1->DR;

	HAL_ADC_Stop_IT(&hadc1);

	return valor;
}

/************************************************************************************************
 * 																								*
 * 										FUNCIONES DE USART			 							*
 * 																								*
 * 																								*
 ************************************************************************************************/

void SED_USART_Interface(void){
	//@brief: imprime el menu del juego
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

	//@brief: hace la busqueda del modo que se introdujo USART.
	//@param uartBuffer: tiene el contenido que se mandó por la USART.

	extern hjuego hj;
	extern UART_HandleTypeDef huart2;

	int y = 0;
	const char modo1[8] = "modo 1";
	const char modo2[8] = "modo 2";
	const char modo3[8] = "modo 3";
	const char modo4[8] = "modo 4";

	const char TX_Modo[24] = "Modo seleccionado: \r\n\n";
	char TX_modo[200]="";


	if((!strcmp(uartBuffer,modo1))){

		hj.modo = SED_MODO_1;
		y = 1;
		sprintf(TX_modo, "**** ESTIMULO VISUAL ****\r\n\n"
				"En este modo de juego, debera fijarse atentamente en la luz roja del centro del tablero.\r\n\n"
				" ~~ SOLO EL MAS RAPIDO GANARA ~~\r\n\n;");
	}

	if((!strcmp(uartBuffer,modo2))){

		hj.modo = SED_MODO_2;
		y = 1;
		sprintf(TX_modo ,"**** ESTIMULO AUDITIVO ****\r\n\n "
				"En este modo de juego, tendras que afinar el oido para ganar.Lavate bien los oidos.\r\n\n"
				"~~ SOLO EL MAS RAPIDO GANARA ~~\r\n\n");


	}
	if((!strcmp(uartBuffer,modo3))){

		hj.modo = SED_MODO_3;
		y = 1;
		sprintf(TX_modo, "**** NOCION DE TIEMPO ****\r\n\n"
				"En este modo de juego, tienes que ser un reloj suizo.\r\n"
				"Concentracion total.\r\n\n"
				"~~ SOLO EL MAS PRECISO GANARA ~~\r\n\n");

	}
	if((!strcmp(uartBuffer,modo4))){

		hj.modo = SED_MODO_4;
		y = 1;
		sprintf(TX_modo, "**** ENTRENAMIENTO ****\r\n\n"
				"Bienvenido al GYM de la reaccion.\r\n"
				"Aqui podras mejorar tu tiempo de reaccion visual.\r\n\n"
				"¿¿TENDRAS MEJORES REFLEJOS QUE EL MISMISIMO FERNANDO ALONSO??\r\n\n");
	}
	if(y){
		HAL_UART_Transmit(&huart2, (uint8_t*) TX_Modo, strlen(TX_Modo), 20);
		HAL_UART_Transmit(&huart2, (uint8_t*) TX_modo, strlen(TX_modo), 20);
	}
	return y;
}

void SED_USART_Inicio_Juego(void){
	//@brief: interface del comienzo del juego

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


void SED_USART_Eleccion_Rondas(void){
	//@brief: pregunta al usuario cuantas rondas quiere jugar
	extern UART_HandleTypeDef huart2;

	const char Rondas[] = "Elige el numero de rondas: \r\n\n"
			"-1\r\n"
			"-3\r\n"
			"-5\r\n"
			"-7\r\n";
	HAL_UART_Transmit(&huart2, (uint8_t*) Rondas, strlen(Rondas), 20);

}

uint8_t SED_USART_Numero_Rondas(char uartBuffer[]){
	//@brief: Hace el control de los valores que entran en la uart
	extern UART_HandleTypeDef huart2;

	uint8_t ref = atoi(uartBuffer);
	uint8_t refVerificada = 0;

	if((ref == 1) || (ref == 3) || (ref == 5) || (ref == 7))
		refVerificada = ref;

	return refVerificada;
}
void SED_USART_Rondas_Elegidas(uint8_t rondasElegidas){
	//@brief: pregunta al usuario cuantas rondas quiere jugar
	extern UART_HandleTypeDef huart2;

	char Rondas[32]="";
	sprintf(Rondas,"Rondas elegidas: \r\n%d\r\n",rondasElegidas);

	HAL_UART_Transmit(&huart2, (uint8_t*) Rondas, strlen(Rondas), 20);
}
void SED_USART_Error_Rondas(void){
	//@brief: error al introducir el numero de rondas
	extern UART_HandleTypeDef huart2;

	char error[] = "Introduzca una valor de rondas validos (1 / 3 / 5 / 7).\r\n";

	HAL_UART_Transmit(&huart2, (uint8_t*) error, strlen(error), 20);
}

void SED_USART_Puestos(void){
	//@brief indica al usuario como posicionarse para jugar
	extern UART_HandleTypeDef huart2;

	const char Puestos[] = "- Jugador 1, dirijase al puesto azul.\r\n\n"
			"- Jugador 2, dirijase al puesto verde.\r\n\n";
	HAL_UART_Transmit(&huart2, (uint8_t*) Puestos, strlen(Puestos), 20);

}

hjuego SED_USART_SwitchMenu(hjuego hj){

	//@brief eleccion del modo de juego;
	hjugadores jugadores = {2,0.0,0.0,0,0}; //ganador, tiempo1,tiempo 2,puntosJ1,puntosJ2

	SED_USART_Inicio_Juego();
	switch(hj.modo){

	case SED_MODO_1:
		SED_Modo_1(hj.rondasElegidas, jugadores);
		break;

	case SED_MODO_2:
		SED_Modo_2(hj.rondasElegidas, jugadores);
		break;

	case SED_MODO_3:
		SED_Modo_3(hj.rondasElegidas, jugadores);
		break;

	case SED_MODO_4:
		SED_Modo_4(hj.rondasElegidas, jugadores);
		break;
	}
	hj.modo = SED_POR_DEFECTO;
	hj.rondasElegidas = 0;
	hj.print = 0;

	return hj;
}


/************************************************************************************************
 * 																								*
 *										FUNCIONES LOGICAS										*
 *																								*
 ************************************************************************************************/

void SED_Modo_1(uint8_t rondas,hjugadores jugadores){
	//@brief: Se enciende la luz de forma aleatorio.

	uint32_t semilla = SED_ADC_Semilla();
	srand(semilla);
	uint32_t tiempoperdedor = 0;
	uint32_t tiempoganador = 0;



	for(int i = 0; i<rondas ;i++){

		uint32_t random = rand() % (SED_CCR_MAX - SED_CCR_MIN + 1) + SED_CCR_MIN;
		TIM2->CCR1 = random;

		TIM2->CR1 |= (1<<0);

		while((TIM2->SR & (1<<1)) == 0); //Esperamos que se encienda la luz
		uint32_t tiempo1 =  TIM3->CNT; //Pillamos el primer tiempo
		SED_SET_LED_ROJO();

		while(((TIM3->SR & (1<<1)) == 0) && ((TIM3->SR & (1<<2)) == 0)); //Pillamos cuando occurre un TIC
		tiempoganador = (TIM3->SR & (1<<1))? TIM3->CCR1 : TIM3->CCR2; //Obtenemos el tiempo del ganador;


		//Buzzer para decir que se pillo la entrada.
		for(int i = 0; i<2;i++){
			SED_SET_BUZZER();
			SED_SET_LED_ROJO();
			SED_Temporización(500);
			SED_RESET_BUZZER();
			SED_RESET_LED_ROJO();
		}

		//Obtenemos el tiempo del perdedor
		if((TIM3->SR & (1<<1))){
			while(((TIM3->SR & (1<<2)) == 0) && (TIM3->CNT > 39999));
			tiempoperdedor = TIM3->CCR2;
			jugadores.ganador = 1;

			if(TIM3->CNT > 39999){
				tiempoperdedor = 39999;
			}
		}
		else{
			while(((TIM3->SR & (1<<1)) == 0) && (TIM3->CNT > 39999));
			tiempoperdedor = TIM3->CCR1;
			jugadores.ganador = 2;

			if(TIM3->CNT > 39999){
				tiempoperdedor = 39999;
			}
		}
		if(jugadores.ganador){
			jugadores.tiempoJ1 = (float)((tiempoganador-tiempo1)*0.0001f);
			jugadores.tiempoJ2 = (float)((tiempoperdedor - tiempo1)*0.0001f);
			jugadores.puntosJ1++;
			SED_SET_LED_AZUL();
		}
		else{
			jugadores.tiempoJ1 = (float)((tiempoperdedor-tiempo1)*0.0001f);
			jugadores.tiempoJ2 = (float)((tiempoganador - tiempo1)*0.0001f);
			jugadores.puntosJ2++;
			SED_SET_LED_VERDE();

		}


		//Espera de 1s
		TIM5->CR1 |= (1<<0);
		while((TIM5->SR & (1<<0)) == 0);
		TIM5->SR &= ~(1<<0);
		TIM5->CR1 &= ~(1<<0);

		//Imprime el resultado
		SED_Numero_A(jugadores.puntosJ1);
		SED_Numero_B(jugadores.puntosJ2);
		SED_RESET_LED_AZUL();
		SED_RESET_LED_VERDE();

		TIM3->SR &= ~( (1<<1) | (1<<2) );
		TIM3->CR1 &= ~(1<<0);

		TIM2->SR &= ~(1<<1);
		TIM2->CR1 &= ~(1<<0);
		TIM2->CNT = 0;
	}

}
void SED_Modo_2(uint8_t rondas,hjugadores jugadores){

}
void SED_Modo_3(uint8_t rondas,hjugadores jugadores){

}
void SED_Modo_4(uint8_t rondas,hjugadores jugadores){

}


