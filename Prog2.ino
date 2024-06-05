/*
 Programa N°2
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

void setup() {
  // Configuramos los pines como entradas
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  // Iniciamos la comunicación serial
  Serial.begin(9600);
  Serial.println("== Bienvenido al Programa 2 ==");
}

void loop() {
  // Creamos la condicional para cuando se presione el boton 1
  if(digitalRead(button1)==HIGH) {
    num++; // Aumenta la cuenta de 1 en 1
    delay(500);
    
    if(num>10) { // Si la cuenta llega a 10
      num=10; //Num se queda en 10
      }
      Serial.print("La cuenta va en: ");
      Serial.println(num); // Mostramos valor en el monitor serial
 } 
if(digitalRead(button2)==HIGH) //Condicional para boton 2
   {
   num--; // Reduce la cuenta de 1 en 1
   delay(500);
   
   if(num<0) // Si es mayor que 0
     {
     num=0; // La cuenta solo queda en 0
   }
   Serial.print("La cuenta va en: ");
  Serial.println(num); //Mostramos valor en monitor serial
  }

}
