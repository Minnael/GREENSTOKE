#include <GreenStoke.h>

/* 
PINAGEM:
  |||||||||||||||
  || GND       ||
  || LED 1: 10 ||
  || LED 2: 11 ||
  |||||||||||||||
    
COMANDOS PARA O USO DOS LEDS:
    - greenstoke.ligarLed(LED 1 OU LED 2); -> Liga o led 1 ou o led 2 (à sua escolha).
    - greenstoke.desligarLed(LED 1 OU LED 2); -> Desliga o led 1 ou o led 2 (à sua escolha).
    - greenstoke.ligarTodosLeds(); -> Liga todos os leds.
    - greenstoke.desligarTodosLeds(); -> Desliga todos os leds.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Esse código é responsável por fazer dois Leds piscarem alternadamente. 

COMO MANIPULAR?
    - Para manipular este código basta fazer alterações nos delays e entre led 1/led2.
*/

GreenStoke greenstoke;

void setup() {    
  greenstoke.configurar();
}

void loop() {
  greenstoke.desligarLed(2);
  greenstoke.ligarLed(1);
  delay(150);
  
  greenstoke.desligarLed(1);
  greenstoke.ligarLed(2);
  delay(150);
}
