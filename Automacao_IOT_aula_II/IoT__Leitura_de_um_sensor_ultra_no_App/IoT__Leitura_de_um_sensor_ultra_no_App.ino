/** IoT - Leitura de um sensor no App
    @author Fabio Alexandre Dias
*/

#include <Ultrasonic.h>
Ultrasonic ultrasonic(12, 13);
int distancia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distancia = ultrasonic.read();
  Serial.println(distancia);
  Serial.print ("");//artifício por causa do app inventor o espaço vazio é para ele não escrever em cima do valor no display 
  delay(500);
}
