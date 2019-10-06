//Este código permite el encendido y apagado de un LED cambiando progresivamente el tiempo de espera


// the setup function runs once when you press reset or power the board
void setup() {
  // Inicializar el pin 13 como una salida 
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    for(int i=1; 1<100; i++){   //Se ingresa la función for con su ingreso de variable y parámetros
  digitalWrite(13, HIGH);      //Proporciona 5V al pin 13
  delay(100*i);                  //En este caso se va incrementando el tiempo de espera para la siguiente acción dle código
  digitalWrite(13, LOW);       Proporciona 0V al pin 13
  delay(50);    
    }//Espera 1000 miliseg o 1 seg 
}
