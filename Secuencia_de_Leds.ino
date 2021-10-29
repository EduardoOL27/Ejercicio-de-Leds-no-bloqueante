const int LedRojo = 4; //Se declara la variable y se le asigna el pin de la ESP32CAM
const int LedVerde = 2; //Se declara la variable y se le asigna el pin de la ESP32CAM
const int LedAmarillo = 14; //Se declara la variable y se le asigna el pin de la ESP32CAM

//Esperas
const int wait5 = 5000;
const int wait3 = 3000;
const int wait1 = 1000;

//Variables globales
 unsigned long timeLast5, timeLast3, timeLast1, timeNow;
 bool datoLedRojo = 0;
 bool datoLedVerde = 0;
 bool datoLedAmarillo = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Programa iniciado");
  
  //Configuración de pines
  pinMode(LedRojo, OUTPUT); //El pin 4 se configura como salida
  pinMode(LedVerde, OUTPUT); //El pin 2 se configura como salida
  pinMode(LedAmarillo , OUTPUT); //El pin 14 se configura como salida

  //Condiciones iniciales de los leds (Apagado)
  digitalWrite (LedRojo, LOW);
  digitalWrite (LedVerde, LOW);
  digitalWrite (LedAmarillo, LOW);

  //Secuencias de tiempo
  timeLast5 = millis ();
  timeLast3 = timeLast5;
  timeLast1 = timeLast5;
}

void loop() {
  // put your main code here, to run repeatedly:
  timeNow = millis ();

  //Contar cada 5 segundos
  if (timeNow - timeLast5 > wait5) {
    //Método para cambiar el estado del led
    toggleLed (LedRojo, datoLedRojo);
    datoLedRojo != datoLedRojo;
    timeLast5 = millis ();
  }

    //Contar cada 3 segundos
  if (timeNow - timeLast3 > wait3) {
    //Método para cambiar el estado del led
    toggleLed (LedVerde, datoLedVerde);
    datoLedVerde != datoLedVerde;
    timeLast3 = millis ();
  }
  
    //Contar cada 1 segundos
  if (timeNow - timeLast1 > wait1) {
    //Método para cambiar el estado del led
    toggleLed (LedAmarillo, datoLedAmarillo);
    datoLedAmarillo != datoLedAmarillo;
    timeLast1 = millis ();
  }
}

//Funciones de usuario
void toggleLed (int pinLed, bool estado) {
  //Cuerpo de toggleLed
  digitalWrite (pinLed, estado);
  estado;
}
