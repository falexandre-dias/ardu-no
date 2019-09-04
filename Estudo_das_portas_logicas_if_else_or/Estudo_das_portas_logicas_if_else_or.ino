/**
   Estudo das portas lógicas
   @author Fabio Dias
*/void setup() {
  pinMode (13, OUTPUT);
  pinMode (2, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH || digitalRead(3)==HIGH) {//Um ou otro botão acenderá o led (OR --> ||)
    digitalWrite (13, HIGH);
  } else {
    digitalWrite (13, LOW);//se o botão não estiver precionado condição desligado
  }
}
