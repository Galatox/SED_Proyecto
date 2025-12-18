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
	 * @brief: Configura el numero binario que se quiere introducir en el decodificador A
	 * @param numero: Numero a introducir
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
	 * @brief: Configura el numero binario que se quiere introducir en el decodificador B
	 * @param numero: Numero a introducir
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
	/*
	 * @brief: Configuracion timer4 Tu = 0.1 ms
	 * @param tiempo: Numero de cuentas
	 */
	TIM4->ARR = tiempo;
	TIM4->CR1 |= (1<<0);
	while((TIM4->SR & (1<<0)) == 0);
	TIM4->SR &= ~(1<<0);
	TIM4->CR1 &= ~(1<<0);
}
/************************************************************************************************
 * 																								*
 *											FUNCIONES ADC										*
 *																								*
 ************************************************************************************************/

uint32_t SED_ADC_Semilla(void){
	/*
	 * @brief: Cambia la semilla de numeros randoms
	 */
	extern ADC_HandleTypeDef hadc1;

	uint32_t valor = 0;
	HAL_ADC_Start(&hadc1);


	if(HAL_ADC_PollForConversion(&hadc1, 10) == HAL_OK){
		valor = HAL_ADC_GetValue(&hadc1);
	}
	HAL_ADC_Stop(&hadc1);

	return valor;
}
/************************************************************************************************
 * 																								*
 *										FUNCIONES DE I2C										*
 *																								*
 ************************************************************************************************/

void SED_LCD_Bienvenido(void)
{
	/*
	 * @brief: Da la bienvenida al usuario
	 */
	lcd_init ();
	lcd_send_string("***BIENVENIDO***");
	lcd_put_cur(1, 0);
	lcd_send_string("***BIENVENIDO***");
	HAL_Delay(2000);

	lcd_clear ();

	lcd_put_cur(0, 0);
	lcd_send_string("Pon a prueba");

	lcd_put_cur(1, 0);
	lcd_send_string("tu reaccion.");
	HAL_Delay(2000);
	lcd_clear ();
}

void SED_LCD_Winner(hjugadores jugadores){
	/*
	 * @brief: Muestra por pantalla el ganador
	 * @param hjugadores jugadores: Datos de los resultados de la partida
	 */
	char stringLCD[16];
	lcd_init ();

	sprintf(stringLCD, "WINNER J%d", jugadores.ganador);
	lcd_send_string(stringLCD);

	lcd_put_cur(1, 0);

	lcd_send_string("ENHORABUENA");

	HAL_Delay(2000);

	lcd_clear ();
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

	HAL_UART_Transmit(&huart2, (uint8_t*) Menu, strlen(Menu), 30);

}

int SED_USART_Modos(char uartBuffer[]){

	/*
	 * @brief: Hace la busqueda del modo que se introdujo USART
	 * @param uartBuffer: Tiene el contenido que se mandó por la USART
	 */

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
	/*
	 * @brief: Interfaz del comienzo del juego
	 */
	extern UART_HandleTypeDef huart2;
	char Inicio[24] = "Inicio del juego en:\r\n ";

	HAL_UART_Transmit(&huart2, (uint8_t*) Inicio, strlen(Inicio), 20);

	for(int i = 3; i>0;i-- ){
		sprintf(Inicio,"%ds\r\n",i);
		HAL_Delay(1000);
		HAL_UART_Transmit(&huart2, (uint8_t*) Inicio, strlen(Inicio), 20);
	}

	sprintf(Inicio,"GO\r\n\n");
	HAL_UART_Transmit(&huart2, (uint8_t*) Inicio, strlen(Inicio), 20);
}


void SED_USART_Eleccion_Rondas(void){
	/*
	 * @brief: Pregunta al usuario cuantas rondas quiere jugar
	 */
	extern UART_HandleTypeDef huart2;

	const char Rondas[] = "Elige el numero de rondas: \r\n\n"
			"-1\r\n"
			"-3\r\n"
			"-5\r\n"
			"-7\r\n";
	HAL_UART_Transmit(&huart2, (uint8_t*) Rondas, strlen(Rondas), 20);

}

uint8_t SED_USART_Numero_Rondas(char uartBuffer[]){
	/*
	 * @brief: Hace el control de los valores que entran en la UART
	 * @param: Tiene el contenido que se mandó por la UART
	 */ 
	extern UART_HandleTypeDef huart2;

	uint8_t ref = atoi(uartBuffer);
	uint8_t refVerificada = 0;

	if((ref == 1) || (ref == 3) || (ref == 5) || (ref == 7))
		refVerificada = ref;

	return refVerificada;
}

void SED_USART_Rondas_Elegidas(uint8_t rondasElegidas){
	/*
	 * @brief: Pregunta al usuario cuantas rondas quiere jugar
	 * @param: Guarda el valor del numero de rondas elegidas
	 */
	extern UART_HandleTypeDef huart2;

	char Rondas[32]="";
	sprintf(Rondas,"Rondas elegidas: \r\n%d\r\n",rondasElegidas);

	HAL_UART_Transmit(&huart2, (uint8_t*) Rondas, strlen(Rondas), 20);
}

void SED_USART_Error_Rondas(void){
	/*
	 * @brief: Error al introducir el numero de rondas
	 */
	extern UART_HandleTypeDef huart2;

	char error[] = "Introduzca una valor de rondas validos (1 / 3 / 5 / 7).\r\n";

	HAL_UART_Transmit(&huart2, (uint8_t*) error, strlen(error), 20);
}

void SED_USART_Puestos(void){
	/*
	 * @brief: Indica a los usuarios como posicionarse para jugar
	 */
	extern UART_HandleTypeDef huart2;

	const char Puestos[] = "- Jugador 1, dirijase al puesto azul.\r\n\n"
			"- Jugador 2, dirijase al puesto verde.\r\n\n";
	HAL_UART_Transmit(&huart2, (uint8_t*) Puestos, strlen(Puestos), 20);

}

void SED_USART_Puestos_Modo_4(void){
	/*
	 * @brief: Indica al usuario como posicionarse para jugar
	 */
	extern UART_HandleTypeDef huart2;

	const char Puestos[] = "- Jugador , dirijase al puesto azul.\r\n\n";
	HAL_UART_Transmit(&huart2, (uint8_t*) Puestos, strlen(Puestos), 20);

}

hjuego SED_USART_SwitchMenu(hjuego hj){
	/* 
	 * @brief: Eleccion del modo de juego
	 * @param hjuego hj: Datos de la seleccion de partida
	 */
	hjugadores jugadores = {2,0.0,0.0,0,0}; //ganador, tiempo1,tiempo 2,puntosJ1,puntosJ2

	SED_RESET_A();
	SED_RESET_B();

	switch(hj.modo){

	case SED_MODO_1:
		SED_USART_Puestos();
		SED_USART_Inicio_Juego();
		jugadores =SED_Modo_1(hj.rondasElegidas, jugadores);
		break;

	case SED_MODO_2:
		SED_USART_Puestos();
		SED_USART_Inicio_Juego();
		jugadores =SED_Modo_2(hj.rondasElegidas, jugadores);
		break;

	case SED_MODO_3:
		SED_USART_Puestos();
		SED_USART_Inicio_Juego();
		jugadores =SED_Modo_3(hj.rondasElegidas, jugadores);
		break;

	case SED_MODO_4:
		SED_USART_Puestos_Modo_4();

		for(int i = 0; i<3;i++){
			SED_SET_LED_AZUL();
			SED_Temporización(9999);
			SED_RESET_LED_AZUL();
		}
		SED_USART_Inicio_Juego();
		jugadores = SED_Modo_4(hj.rondasElegidas, jugadores);
		break;
	}
	SED_LCD_Winner(jugadores);
	SED_USART_Interface();

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

hjugadores SED_Modo_1(uint8_t rondas,hjugadores jugadores){
	/*
	 * @brief: Configuracion modo Estimulo Visual
	 * @param rondas: Numero de rondas
	 * @param h jugadores jugadores: Datos de los resultados de la partida
	 */
	uint32_t semilla = SED_ADC_Semilla();
	srand(semilla);
	uint32_t tiempoperdedor = 0;
	uint32_t tiempoganador = 0;

	for(int i = 0; i<rondas ;i++){
		jugadores.ganador = 0;
		uint32_t random = rand() % (SED_CCR_MAX - SED_CCR_MIN + 1) + SED_CCR_MIN;
		TIM3->CCR1 = random;

		TIM3->CR1 |= (1<<0);

		while((TIM3->SR & (1<<1)) == 0); //Esperamos que se encienda la luz

		SED_Temporización(19999);
		uint32_t tiempo1 =  TIM2->CNT; // Tiempo inicial
		SED_SET_LED_ROJO();

		TIM2->SR = 0;
		while(1){
			// JUGADOR 1
			if(TIM2->SR & (1<<1)){
				jugadores.ganador = 1;
				tiempoganador = TIM2->CCR1;
				break;
			}

			// JUGADOR 2
			if(TIM2->SR & (1<<2)){
				jugadores.ganador = 2;
				tiempoganador = TIM2->CCR2;
				break;
			}

			//TIMEOUT
			if ((TIM2->CNT - tiempo1) > 50000) {
				jugadores.ganador = 0;
				break;
			}
		}
		TIM2->SR = 0;

		//Buzzer para decir que se pillo la entrada.
		for(int i = 0; i<2;i++){
			SED_SET_BUZZER();
			SED_SET_LED_ROJO();
			HAL_Delay(500);
			SED_RESET_BUZZER();
			SED_RESET_LED_ROJO();
		}
		//Atribucion de los puntos y de los tiempos.
		if(jugadores.ganador == 1){
			jugadores.tiempoJ1 = (float)((tiempoganador - tiempo1)*0.0001f);
			jugadores.tiempoJ2 = (float)((tiempoperdedor - tiempo1)*0.0001f);
			jugadores.puntosJ1++;
			SED_SET_LED_AZUL();
		}
		else if(jugadores.ganador == 2){
			jugadores.tiempoJ1 = (float)((tiempoperdedor - tiempo1)*0.0001f);
			jugadores.tiempoJ2 = (float)((tiempoganador - tiempo1)*0.0001f);
			jugadores.puntosJ2++;
			SED_SET_LED_VERDE();
		}

		HAL_Delay(1000);

		//Imprime el resultado
		SED_Numero_A(jugadores.puntosJ1);
		SED_Numero_B(jugadores.puntosJ2);
		SED_RESET_LED_AZUL();
		SED_RESET_LED_VERDE();


		TIM2->CR1 &= ~(1<<0);

		TIM3->SR &= ~(1<<1);
		TIM3->CR1 &= ~(1<<0);
		TIM3->CNT = 0;
	}
	return jugadores;
}

hjugadores SED_Modo_2(uint8_t rondas,hjugadores jugadores){
	/*
	 * @brief: Configuracion modo Estimulo Auditivo
	 * @param rondas: Numero de rondas
	 * @param h jugadores jugadores: Datos de los resultados de la partida
	 */
	uint32_t semilla = SED_ADC_Semilla();
	srand(semilla);
	uint32_t tiempoperdedor = 0;
	uint32_t tiempoganador = 0;

	for(int i = 0; i<rondas ;i++){
		jugadores.ganador = 0;
		uint32_t random = rand() % (SED_CCR_MAX - SED_CCR_MIN + 1) + SED_CCR_MIN;
		TIM3->CCR1 = random;

		TIM3->CR1 |= (1<<0);

		while((TIM3->SR & (1<<1)) == 0); //Esperamos que se encienda la luz

		HAL_Delay(1000);
		uint32_t tiempo1 =  TIM2->CNT; // Tiempo inicial
		SED_SET_BUZZER();

		TIM2->SR = 0;
		while(1){
			// JUGADOR 1
			if(TIM2->SR & (1<<1)){
				jugadores.ganador = 1;
				tiempoganador = TIM2->CCR1;
				break;
			}

			// JUGADOR 2
			if(TIM2->SR & (1<<2)){
				jugadores.ganador = 2;
				tiempoganador = TIM2->CCR2;
				break;
			}

			//TIMEOUT
			if ((TIM2->CNT - tiempo1) > 50000) {
				jugadores.ganador = 0;
				break;
			}
		}
		SED_RESET_BUZZER();
		TIM2->SR = 0;

		//Buzzer para decir que se pillo la entrada.
		for(int i = 0; i<2;i++){
			SED_SET_LED_ROJO();
			HAL_Delay(500);
			SED_RESET_LED_ROJO();
		}
		//Atribucion de los puntos y de los tiempos.
		if(jugadores.ganador == 1){
			jugadores.tiempoJ1 = (float)((tiempoganador - tiempo1)*0.0001f);
			jugadores.tiempoJ2 = (float)((tiempoperdedor - tiempo1)*0.0001f);
			jugadores.puntosJ1++;
			SED_SET_LED_AZUL();
		}
		else if(jugadores.ganador == 2){
			jugadores.tiempoJ1 = (float)((tiempoperdedor - tiempo1)*0.0001f);
			jugadores.tiempoJ2 = (float)((tiempoganador - tiempo1)*0.0001f);
			jugadores.puntosJ2++;
			SED_SET_LED_VERDE();
		}

		HAL_Delay(1000);

		//Imprime el resultado
		SED_Numero_A(jugadores.puntosJ1);
		SED_Numero_B(jugadores.puntosJ2);
		SED_RESET_LED_AZUL();
		SED_RESET_LED_VERDE();


		TIM2->CR1 &= ~(1<<0);

		TIM3->SR &= ~(1<<1);
		TIM3->CR1 &= ~(1<<0);
		TIM3->CNT = 0;
	}
	return jugadores;
}

hjugadores SED_Modo_3(uint8_t rondas,hjugadores jugadores){
	/*
	 * @brief: Configuracion modo Nocion del Tiempo
	 * @param rondas: Numero de rondas
	 * @param h jugadores jugadores: Datos de los resultados de la partida
	 */
	uint32_t semilla = SED_ADC_Semilla();
	srand(semilla);


	TIM2->CR1 |= (1<<4);
	TIM2->ARR = 89999;
	TIM2->EGR |= (1<<0);


	for(int i = 0; i<rondas; i++){
		jugadores.ganador = 0;
		uint32_t random = rand() % (7 - 3 + 1) + 3;


		for(int i = 9; i>random; i--){
			SED_Numero_A(i);
			HAL_Delay(1000);
		}
		TIM5->CNT = random *10000;
		TIM5->CR1 |= (1<<0);


		int p1,p2 = 0;

		while((TIM5->SR & (1<<0)) == 0){
			// JUGADOR 1
			if((TIM2->SR & (1<<1)) && (p1 == 0)){
				jugadores.tiempoJ1 = TIM2->CCR1;
				p1 = 1;
			}

			// JUGADOR 2
			if((TIM2->SR & (1<<2)) && (p2 == 0)){
				jugadores.tiempoJ2 = TIM2->CCR2;
				p2 = 1;
			}
		}


		SED_SET_BUZZER();
		HAL_Delay(1000);
		SED_RESET_BUZZER();


		//Atribucion de los puntos y de los tiempos.
		if(jugadores.tiempoJ1 < jugadores.tiempoJ2 ){

			jugadores.puntosJ1++;
			SED_SET_LED_AZUL();
		}
		else if(jugadores.tiempoJ1 > jugadores.tiempoJ2 ){

			jugadores.puntosJ2++;
			SED_SET_LED_VERDE();
		}


		//Espera de 1s
		HAL_Delay(1000);

		SED_RESET_LED_AZUL();
		SED_RESET_LED_VERDE();


		TIM2->CR1 &= ~(1<<0);

		TIM5->SR &= ~(1<<0);
		TIM5->CR1 &= ~(1<<0);
		TIM5->CNT = 0;
	}

	jugadores.ganador = jugadores.puntosJ1 > jugadores.puntosJ2 ? 1 : 2;

	TIM2->CR1 &= ~(1<<4);
	TIM2->ARR = 0xFFFFFFFF;
	TIM2->EGR |= (1<<0);


	return jugadores;
}

hjugadores SED_Modo_4(uint8_t rondas,hjugadores jugadores){
	/*
	 * @brief: Configuracion modo Entrenamiento
	 * @param rondas: Numero de rondas
	 * @param h jugadores jugadores: Datos de los resultados de la partida
	 */
	uint32_t semilla = SED_ADC_Semilla();
	srand(semilla);
	uint32_t tiempoganador = 0;

	for(int i = 0; i<rondas ;i++){
		jugadores.ganador = 0;
		uint32_t random = rand() % (SED_CCR_MAX - SED_CCR_MIN + 1) + SED_CCR_MIN;
		TIM3->CCR1 = random;

		TIM3->CR1 |= (1<<0);

		while((TIM3->SR & (1<<1)) == 0); //Esperamos que se encienda la luz

		SED_Temporización(SED_CCR_MIN);
		uint32_t tiempo1 =  TIM2->CNT; // Tiempo inicial
		SED_SET_LED_ROJO();

		TIM2->SR = 0;
		while(1){
			// JUGADOR 1
			if(TIM2->SR & (1<<1)){
				jugadores.ganador = 1;
				tiempoganador = TIM2->CCR1;
				break;
			}
			//TIMEOUT
			if ((TIM2->CNT - tiempo1) > 5000) {
				jugadores.ganador = 0;
				break;
			}
		}
		SED_RESET_LED_ROJO();
		TIM2->SR = 0;

		//Buzzer para decir que se pillo la entrada.
		for(int i = 0; i<2;i++){
			SED_SET_BUZZER();
			SED_SET_LED_ROJO();
			SED_Temporización(500);
			SED_RESET_BUZZER();
			SED_RESET_LED_ROJO();
		}
		//Atribucion de los puntos y de los tiempos.
		if(jugadores.ganador == 1){
			jugadores.tiempoJ1 = (float)((tiempoganador - tiempo1)*0.01f);
			jugadores.puntosJ1++;
			SED_SET_LED_AZUL();
		}

		//Espera de 1s
		SED_Temporización(20000);

		//Imprime el resultado
		SED_Numero_A(jugadores.puntosJ1);
		SED_RESET_LED_AZUL();

		TIM2->CR1 &= ~(1<<0);

		TIM3->SR &= ~(1<<1);
		TIM3->CR1 &= ~(1<<0);
		TIM3->CNT = 0;
	}
	return jugadores;
}



