/**
 * Uso de bibliotécas - servo
 * @author Fabio Dias 
 */
 #include <Servo.h>
Servo servoGarra;

 void setup() {
  servoGarra.attach(9); 

}

void loop() {
 servoGarra.write(180);
 delay(1000);
 servoGarra.write(0);
 delay(1000);
}
