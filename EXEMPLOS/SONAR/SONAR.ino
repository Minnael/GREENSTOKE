#include <GreenStoke.h>

/* 
PINAGEM:
  |||||||||||||||
  || GND       ||
  || +5V       ||
  || TRIG:  6  ||
  || ECHO:  7  ||
  |||||||||||||||
    
COMANDOS PARA O USO DO SENSOR DE ULTRASSOM (SONAR):
    - greenstoke.valorSonarMetros(); -> Coleta os valores de Distancia em Metros.
    - greenstoke.valorSonarCentimetros(); -> Coleta os valores de Distancia em Centimetros.
    - greenstoke.valorSonarMilimetros(); -> Coleta os valores de Distancia em Milimetros.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Esse código impreme uma Distancia em três grandezas diferentes (Metro, Centimetro e Milimetro);

COMO MANIPULAR?
    - Pode manipular atráves de novos módulos que estejam em função do valor de distancia.
*/

GreenStoke greenstoke;

void setup() {
  greenstoke.configurar();
  Serial.print("METROS  |  CENTIMETROS  |  MILIMETROS");
}

void loop() {
  Serial.println("");
  Serial.print(greenstoke.valorSonarMetros());
  Serial.print("    |     ");
  Serial.print(greenstoke.valorSonarCentimetros());
  Serial.print("     |    ");
  Serial.print(greenstoke.valorSonarMilimetros());
  delay(2000);

}
