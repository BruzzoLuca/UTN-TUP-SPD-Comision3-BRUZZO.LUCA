// Liberia para LCD
#include <LiquidCrystal.h>
// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 5;
void setup() {
// Inicializamos LCD
lcd.begin(16, 2);

lcd.setCursor(0, 0);
  lcd.print("Apoye la tarjeta");
delay(2000);
  lcd.clear();
  
  
lcd.setCursor(0, 0);
lcd.print("Aguarde...");
delay(3000);
lcd.clear();


lcd.setCursor(0, 0);
lcd.print("Su saldo es: 150");
delay(2000);
lcd.clear();
  
lcd.setCursor(0, 0);
  lcd.print("Gracias por usar");
lcd.setCursor(0, 2);
lcd.print("nuestro servicio");
}

void loop() {
 
}
