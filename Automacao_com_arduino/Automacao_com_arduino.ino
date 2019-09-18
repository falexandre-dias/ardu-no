/**
   Automação com Arduino
   @author Fabio Dias
*/
// criando uma variavel que irá receber um caractere
char leitor;//ele cria uma variável que recebe um caractere
void setup() {
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    leitor = Serial.read(); //ele lê o caractere em comunicação
    if (leitor == 'a') {//se isso for verdade executa o comando abaixo
      digitalWrite(13, HIGH);//acende a lãmpada da cozinha
    }
    if (leitor == 's') {
      digitalWrite(13, LOW);//apaga a lâmpada da cozinha
    }
  } if (leitor == 'q') {
    digitalWrite(12, HIGH);//acende a lãmpada da cozinha
  }
  if (leitor == 'w') {
    digitalWrite(12, LOW);//apaga a lâmpada da cozinha
  }
}
