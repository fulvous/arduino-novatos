#define MI_LED 11

void setup() {
  // Inicializa LED como salida.
  pinMode(MI_LED, OUTPUT);
}

void loop() {
  // Encender el led de forma progresiva
  for ( int i=0; i++; i<256 ) {
    //Aumentar intensidad
    analogWrite(MI_LED,i);
    //Esperar un poco
    delay(100);
  };  
}
