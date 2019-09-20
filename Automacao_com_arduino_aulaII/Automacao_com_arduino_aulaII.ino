/**
   Automação com Arduino
   @author Fabio Dias
*/
// criando uma variavel que irá receber um caractere
char leitor;//ele cria uma variável que recebe um caractere. Conforme tabela ASCII
void setup() {
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {//item de segurança. Só vai ler se a comunicação for estabelecida. Ex. Bluetooth
    leitor = Serial.read(); //ele lê o caractere em comunicação
    switch (leitor) {//direcione o conteúdo da variável 
      case'a'://se for 'a'faz isso 
        digitalWrite(13, HIGH);
        break;//ai para
        case's'://se for 's'faz isso 
        digitalWrite(13, LOW);
        break;//ai para
        case'q'://se for 'q'faz isso 
        digitalWrite(12, HIGH);
        break;//ai para
        case'w'://se for 'w'faz isso 
        digitalWrite(12, LOW);
        break;//ai para 
    }
  }
}
