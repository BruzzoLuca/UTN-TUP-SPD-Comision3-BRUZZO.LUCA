int TEMP = 0;
int readValue = 0;
int lastValue = 1;
int sensorPin = A2;
float voltsValue;

void setup()
{
 // pinMode(A2, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT); 
}

void loop()
{ 
   readValue = analogRead(sensorPin);
   if (lastValue != readValue) {
    Serial.print("readValue: ");
    Serial.print(readValue);
    lastValue = readValue;
    voltsValue = 5.0 / 1024 * readValue;
    Serial.print(" -> voltsValue: ");
    Serial.print(voltsValue);
    TEMP = voltsValue * 100 - 50;
    Serial.print(" -> tempValue: ");
    Serial.println(TEMP);
    //TEMP = analogRead(A2);
    //Serial.println(TEMP);
     if (readValue > -40&& readValue <= 100){
          
          
          digitalWrite(5, HIGH);
          digitalWrite(4, HIGH);
          Serial.print(" LED VERDE Y AZUL ENCENDIDOS ");
          Serial.print(" LED AMARILLO Y ROJO APAGADOS "); 
        } else {
          if (readValue > 101&& readValue <= 125) {
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            
            
            Serial.print(" LED VERDE Y AZUL APAGADOS ");
            Serial.print(" LED AMARILLO Y ROJO ENCENDIDOS ");
          } else {
            if (readValue > 300){
              digitalWrite(4, HIGH);
              digitalWrite(5, HIGH);
              
              Serial.print("LEDS APAGADOS ");
            }
          }
        }
      }
  delay(10); 
}