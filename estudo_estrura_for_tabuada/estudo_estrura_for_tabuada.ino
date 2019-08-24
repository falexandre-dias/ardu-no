/**
 * Estudo do laço for
 * @author  Fabio Dias
 */
void setup() {//executa tudo apenas uma vez
  Serial.begin (9600);//9600 bps - bits por segundo - padrão seguro de comunicação
  int valor=9;
  for (int i=1; i<=10; i++){
    Serial.print (valor);
    Serial.print ("x");
    Serial.print (i);//conteúdo da variável do laço
    Serial.print (" = ");
    Serial.println (valor*i);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
