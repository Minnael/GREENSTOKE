#include <GreenStoke.h>

/* 
PINAGEM:
  |||||||||||||||
  || GND       ||
  || +5V       ||
  || SINAL: 9  ||
  |||||||||||||||
    
COMANDOS PARA O USO DO SERVO:
    - greenstoke.servoAngulo(0~180); -> Coloca o servo em um angulo de 0~180 desejado.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Esse código faz com que o servo vá de 0 a 180 e fique repetindo isso. 

COMO MANIPULAR?
    - Para manipular é muito simples, basta fazer alterações básicas no parâmetro de ângulo e nos delays.
*/

GreenStoke greenstoke;

void setup() {
  greenstoke.configurar();
}

void loop() {
  greenstoke.servoAngulo(0);
  delay(500);
  greenstoke.servoAngulo(90);
  delay(500);
  greenstoke.servoAngulo(180);
  delay(500);
}
