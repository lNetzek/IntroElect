/*
 Programa N°3
 =====================
 Autores:
 - Donayre Angulo, Carlos Alberto
 - Manchego Caceres, Gustavo Miguel
 - Quispe Flores, Paolo Danilo
 - Romero Bejarano, Sandro Fabrizzio
 */
// Definimos los pines para los botones
int num = 0;
int button1 = 9;
int button2 = 10;
int ledgreen = 13;
int ledred = 12;
bool greenLedShown = false;
bool redLedShown = false;

void setup() {
  // Configuramos los pines como entradas
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  // Configuramos los pines de los led como salidas
  pinMode(ledgreen, OUTPUT);
  pinMode(ledred, OUTPUT);
  // Iniciamos la comunicación serial
  Serial.begin(9600);
  Serial.println("== Bienvenido al Programa 3 ==");
}

void loop() {
  // Creamos la condicional para cuando se presione el boton 1
  if (digitalRead(button1) == HIGH) {
    num++; // Aumenta la cuenta de 1 en 1
    delay(500);

    if (num > 9) { // Si la cuenta llega a 9
      num = 9; //Num se queda en 9
    }
    Serial.print("La cuenta va en: ");
    Serial.println(num); // Mostramos valor en el monitor serial
  }
  if (digitalRead(button2) == HIGH) { //Condicional para boton 2
    num--; // Reduce la cuenta de 1 en 1
    delay(500);

    if (num < 0) { // Si es mayor que 0
      num = 0; // La cuenta solo queda en 0
    }
    Serial.print("La cuenta va en: ");
    Serial.println(num); //Mostramos valor en monitor serial
  }
  if (num == 9) { // Si la cuenta es igual a nueve
    digitalWrite(ledgreen, HIGH); //Se enciende el LED verde
    if (!greenLedShown) { //condicional para no repetir el mensaje
      Serial.println("LED Verde encendido!"); //Mensaje led encendido
      greenLedShown = true;
      redLedShown = false;
    }
  } else {
    digitalWrite(ledgreen, LOW); //Apagamos el led verde
    greenLedShown = false;
  }
  if (num == 0) {
    digitalWrite(ledred, HIGH);
    if (!redLedShown) {
      Serial.println("LED Rojo encendido!");
      redLedShown = true;
      greenLedShown = false;
    }
  } else {
    digitalWrite(ledred, LOW);
    redLedShown = false;
  }
}
