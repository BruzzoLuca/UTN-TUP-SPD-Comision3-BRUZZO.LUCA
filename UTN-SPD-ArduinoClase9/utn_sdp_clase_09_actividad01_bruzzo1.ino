int lectura = 0;
int distancia = 0;
int anterior = 0;
int led_pin = 9;


void setup() {
	Serial.begin(9600);
  	pinMode(led_pin, OUTPUT);
  	
	// Enviar Texto a la Consola Serial
	Serial.println("Iniciando");
}

void loop() {
	// Tomar Lectura
	lectura = readUltrasonicDistance(7, 7);
	// Calcular Distancia
	distancia = 0.01723 * lectura;
  	if (anterior != distancia) 
    {
      	anterior = distancia;
    	// Enviar Lectura a la Consola Serial
		Serial.print(distancia);
		Serial.println("cm");
		delay(100); // Demora de 100ms
    }
  	if (distancia < 100) 
    {
      	digitalWrite(led_pin, 1);
      	delay(1000); 
     
    }  else if (distancia>100)
    {
    digitalWrite(led_pin, 0);
      	delay(1000); 
    }
  
  
}

// Función para Recolectar Lectura
long readUltrasonicDistance(int triggerPin, int echoPin)
{
// Inicializar Sensor
pinMode(triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);
// Iniciar Sensor en Modo Lectura
pinMode(echoPin, INPUT);
// Retornar Lectura
return pulseIn(echoPin, HIGH);
}