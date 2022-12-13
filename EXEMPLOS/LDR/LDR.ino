#include <GreenStoke.h>

/* 
PINAGEM:
  |||||||||||||||
  || GND       ||
  || +5V       ||
  || SINAL: A0 ||
  |||||||||||||||
    
COMANDOS PARA O USO DO LDR:
    - greenstoke.valorLdr(); -> Coleta os valores de luminosidade do local.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Esse código apenas imprime no serial o nível de luminosidade de um determinado local. 

COMO MANIPULAR?
    - Pode manipular atráves de novos módulos que estejam em função do valor do ldr.
*/

GreenStoke greenstoke;

void setup() {
  greenstoke.configurar();
}

void loop() {
  Serial.println(greenstoke.valorLdr());
}
