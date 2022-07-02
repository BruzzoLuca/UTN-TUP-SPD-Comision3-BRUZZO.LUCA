// 4 Leds intermitentes
int buttonState = 0;
void setup()
{
// Configuración de pines como Entrada
pinMode(2, INPUT);
// Configuración de pines como Salida
pinMode(5, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(13, OUTPUT);
}
void loop()
{
 // Leer Estado del Puerto de Entrada 2
buttonState = digitalRead(2);
 // Actualizar Segun el Estado de la Lectura
if (buttonState == HIGH){

  // Encender y apagar Led en Puerto 8
digitalWrite(8, HIGH);
  delay(500);
digitalWrite(8, LOW);

  // Encender y apagar Led en Puerto 9
digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  
  // Encender y apagar Led en Puerto 10
digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  
  // Encender y apagar Led en Puerto 13
digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  
} 
  else{
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
}
}