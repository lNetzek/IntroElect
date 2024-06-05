/*
  Arrays
  Demuestra el uso de una matriz para contener números de pin para poder iterar sobre
  los pines en una secuencia. Enciende varios LED en secuencia y luego a la inversa.
  
  A diferencia del tutorial For Loop, donde los pines tienen que ser contiguos, aquí el
  Los pines pueden estar en cualquier orden aleatorio.

   Programa N°1
   =====================
   Estudiantes:
   - Donayre Angulo, Carlos Alberto
   - Manchego Caceres, Gustavo Miguel
   - Quispe Flores, Paolo Danilo
   - Romero Bejarano, Sandro Fabrizzio
*/

int timer = 100;           // Cuanto mayor sea el número, más lento será el tiempo.
int ledPins[] = {
  9, 10, 11, 12, 13
};       // una serie de números de pines a los que se conectan los LED
int pinCount = 6;           // el número de pines (es decir, la longitud de la matriz)

void setup() {
  // los elementos de la matriz están numerados del 0 al (pinCount - 1).
  // use un bucle for para inicializar cada pin como salida:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop() {
  // bucle desde el pin más bajo al más alto:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // enciende el pin:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    // apague el pasador:
    digitalWrite(ledPins[thisPin], LOW);

  }

  // bucle desde el pin más alto al más bajo:
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    // enciende el pin:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    // apague el pin:
    digitalWrite(ledPins[thisPin], LOW);
  }
}
