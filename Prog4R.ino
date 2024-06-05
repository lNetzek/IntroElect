/*
  Programa N°4
  =====================
  Autores:
  - Donayre Angulo, Carlos Alberto
  - Manchego Caceres, Gustavo Miguel
  - Quispe Flores, Paolo Danilo
  - Romero Bejarano, Sandro Fabrizzio
*/

// Definir los pines para los LEDs
const int LED_PIN_01 = 12;
const int LED_PIN_02 = 11;

// Variables para controlar el estado de los LEDs
bool led01_encendido = false;
bool led02_encendido = false;

void setup() {
  // Configurar los pines de los LEDs como salidas
  pinMode(LED_PIN_01, OUTPUT);
  pinMode(LED_PIN_02, OUTPUT);

  // Inicializar el monitor serie
  Serial.begin(9600);
  Serial.println("== Bienvenido al Programa 4 ==");
}

void loop() {
  // Verificar si hay datos disponibles en el puerto serie
  if (Serial.available() > 0) {
    // Leer el carácter recibido
    char opcion = Serial.read();

    // Realizar acciones basadas en la opción recibida
    switch (opcion) {
      case 'A':
        digitalWrite(LED_PIN_01,HIGH);
        digitalWrite(LED_PIN_02,LOW);
        Serial.println("Opción 01: Led 01 - Encendido");
        break;
      case 'a':
        digitalWrite(LED_PIN_01,LOW);
        digitalWrite(LED_PIN_02,LOW);
        Serial.println("Opción 01: Led 01 - Apagado");
        break;
      case 'B':
        digitalWrite(LED_PIN_02,HIGH);
        digitalWrite(LED_PIN_01,LOW);
        Serial.println("Opción 02: Led 02 - Encendido");
        break;
      case 'b':
        digitalWrite(LED_PIN_02,LOW);
        digitalWrite(LED_PIN_01,LOW);
        Serial.println("Opción 02: Led 02 - Apagado");
        break;
      case '1':
        Serial.println("Presiono la Tecla: 1");
        digitalWrite(LED_PIN_01,HIGH);
        digitalWrite(LED_PIN_02,LOW);
        Serial.println("Opción 03: Terminado");
        break;
      case '0':
        digitalWrite(LED_PIN_01,LOW);
        for (int i = 0; i < 2; i++) {
          digitalWrite(LED_PIN_02, HIGH);
          delay(500);
          digitalWrite(LED_PIN_02, LOW);
          delay(500);
        }
        Serial.println("Opción 04: Terminado");
        break;
      default:
        // Si se recibe un carácter no reconocido, ignorarlo
        break;
    }
  }
}
