#define MI_LED 13

void setup() {
  // Inicializa LED como salida.
  pinMode(MI_LED, OUTPUT);
}

void loop() {
  // Enciende el LED, HIGH es +5V
  digitalWrite(MI_LED, HIGH);
  // Espera un minuto
  delay(1000);                   
  // Apaga el led, LOW es 0V    
  digitalWrite(MI_LED, LOW);
  // Espera otro segundo
  delay(1000);                       
}

