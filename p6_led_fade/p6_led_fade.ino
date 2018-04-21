#define MI_LED 11
#define ESPERA 10


void setup() {
  // Inicializa LED como salida.
  pinMode(MI_LED, OUTPUT);
}

void loop() {
  // Encender el led de forma progresiva
  for ( int i=0; i<256; i++) {
    //Aumentar intensidad
    analogWrite(MI_LED,i);
    //Esperar un poco
    delay(ESPERA);
  };  
  
  //Apagar el led de forma progresiva
  for ( int i=255; i>0; i--) {
    //Disminuir la intensidad
    analogWrite(MI_LED,i);
    //Esperar un poco
    delay(ESPERA);
  };
}
