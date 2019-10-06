//Este código permite el encendido y apagado de un LED


// the setup function runs once when you press reset or power the board
void setup() {
  // Inicializar el pin 13 como una salida 
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);      //Proporciona 5V al pin 13
  delay(1000);                  //Espera 1000 miliseg o 1 seg
  digitalWrite(13, LOW);       Proporciona 0V al pin 13
  delay(1000);                 //Espera 1000 miliseg o 1 seg 
}
