#include "main.h"
#include "i2c-lcd.h"

I2C_HandleTypeDef hi2c1;

int row=0;
int col=0;

uint8_t J1 = 1;
uint8_t J2 = 2;
float t_J1 = 0.0;
float t_J2 = 0.0;

char stringLCD[16];

int main(void)
{
  lcd_init ();

  sprintf(stringLCD, "WINNER J%d", J1);
  lcd_send_string(stringLCD);

  lcd_put_cur(1, 0);

  lcd_send_string("ENHORABUENA");

  HAL_Delay(2000);

  lcd_clear ();

  lcd_put_cur(0, 0);
  sprintf(stringLCD, "Tiempo J1: %f", t_J1);
  lcd_send_string(stringLCD);

  lcd_put_cur(1, 0);
  sprintf(stringLCD, "Tiempo J2: %f", t_J2);
  lcd_send_string(stringLCD);

  HAL_Delay(2000);
}

void SED_LCD_Bienvenido()
{
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
}





