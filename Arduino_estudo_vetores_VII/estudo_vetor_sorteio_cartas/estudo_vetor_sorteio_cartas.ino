/**
   Array II (vetor)// o vetor é uma lita indexada
   @author Fabio Dias
*/

void setup() {
  Serial.begin (9600);//iniciar gerador de numros aleatorios
  randomSeed(analogRead(A0));
  String faces [13] = {"1","2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
  String nipes[4] = {"♦", "♠", "♥", "♣"};
                    int f = random (13); //sorteio de 13 numeros aleatorios
                    int n = random (4); //sorteio de 4 numeros aleatorios
                    Serial.print (faces[f]);
                    Serial.println (nipes[n]);
}
void loop() {


}
