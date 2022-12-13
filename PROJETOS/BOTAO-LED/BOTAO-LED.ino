#include <GreenStoke.h>

/* 
PINAGEM:
        LED
  |||||||||||||||
  || GND       ||
  || LED 1: 10 ||
  || LED 2: 11 ||
  |||||||||||||||

       BOTAO
  |||||||||||||||
  || GND       ||
  || SINAL: 12 ||
  |||||||||||||||
    
COMANDOS PARA O USO DOS :
    - greenstoke.botaoPressionado() -> Verifica se o botão foi pressionado.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Esse código liga o led 1 caso o botao seja pressioando. 
    
*/

GreenStoke greenstoke;

void setup() {
  greenstoke.configurar();
}

void loop() {
  if(greenstoke.botaoPressionado()){
    greenstoke.ligarLed(1);
  }
  else{
    greenstoke.desligarLed(1);
  }
}
