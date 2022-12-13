#include <GreenStoke.h>

/* 
PINAGEM:
        LED
  |||||||||||||||
  || GND       ||
  || LED 1: 10 ||
  || LED 2: 11 ||
  |||||||||||||||

       SONAR
  |||||||||||||||
  || GND       ||
  || +5V       ||
  || TRIG:  6  ||
  || ECHO:  7  ||
  |||||||||||||||
    
O QUE DANADO ESSE CÓDIGO FAZ?
    - Esse código é responsável por fazer com que um led acenda assim que o sonar detectar uma distancia menor que 4cm. 
*/

GreenStoke greenstoke;

void setup(){
  greenstoke.configurar();
}

void loop() {
  if (greenstoke.valorSonarCentimetros() < 4){ // Se o valor do sonar for menor que 4cm, ligar o led.
    greenstoke.ligarLed(1);
  }
  else{
    greenstoke.desligarLed(1); // Caso o valor do sonar seja maior ou igual a 4cm o led deverá ser desligado.
  }  
}
