//Programa: Sensor de som KY-038 para exibir gráficos de áudio

void setup()
{
  Serial.begin(4800); // define o valor de velocidade da transmissão de dados

}
void loop()
{
 int valor_sensor = analogRead(A5);//lê o valor da porta analógica A5 e armazena na variável valor_sensor

   Serial.println(valor_sensor);// imprime o valor armazenado na varriável valor_sensor
}
