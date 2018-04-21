#define POT A3
#define MI_LED 11

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
  analogWrite(MI_LED,escritura);
  Serial.println(escritura);
  delay(100);
  
}
