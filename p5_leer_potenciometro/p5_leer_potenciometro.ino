void setup()
{ Serial.begin(9600); }

void loop()
{
Serial.println(analogRead(A3)); // leer e imprimir
delay(1000);     // espera 1 segundo
}
