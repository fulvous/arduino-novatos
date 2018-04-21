#define POT A3
#define MI_LED 11
#define MI_SERVO 9

int lectura=0;
int escritura=0;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);  
  // initialize the digital pin as an output.
  pinMode(MI_LED, OUTPUT);
  pinMode(POT, INPUT);  
}

// the loop routine runs over and over again forever:
void loop() {

  lectura=analogRead(POT);  
  escritura=(255./1023.)*lectura;
  //Ilumina led
  analogWrite(MI_LED,escritura);
  
  //Regular la salida no menor a 65, no mayor a 200
  if ( escritura < 65 ) {
    analogWrite(MI_SERVO,65);
  } else {
    if ( escritura > 200 ) {
      analogWrite(MI_SERVO,200);
    } else {
      analogWrite(MI_SERVO,escritura);
    }
  }
  //Imprimir el valor registrado
  Serial.println(escritura);
  delay(100);
  
}
