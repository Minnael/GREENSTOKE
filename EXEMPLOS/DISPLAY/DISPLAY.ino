#include <GreenStoke.h>

/* 
PINAGEM:
  |||||||||||||||
  ||  +5V      ||
  ||  GND      ||
  ||  SDA: A4  ||
  ||  SCL: A5  ||
  |||||||||||||||
    
COMANDOS PARA O USO DO DISPLAY:
    - greenstoke.ajustarDisplay(coluna, linha); -> Seleciona a região do display que você quer escrever.
    - greenstoke.escreverDisplay(texto que você quer escrever); -> Define a palavra/frase que você deseja escrever.
    - greenstoke.limparDisplay(); -> Limpa completamente o Display.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Esse código possui como premissa fazer o display piscar de maneira em que escreva/apague a frase "CABEÇA DE OVELHA". 

COMO MANIPULAR?
    - Para manipular o código basta sobrescrever a frase "CABEÇA DE OVELHA" utilizando uma que tem em mente.
*/

GreenStoke greenstoke;

void setup() {
  greenstoke.configurar();
}

void loop() {
  greenstoke.ajustarDisplay(0, 0); //Seleciona a região do display que você quer escrever. 
  greenstoke.escreverDisplay("CABECA DE OVELHA"); //Define a palavra/frase que você deseja escrever.
  delay(1000); //Espera um tempo de 1s.
  greenstoke.limparDisplay(); //Limpa completamente o Display.
  delay(1000); //Espera um tempo de 1s.
}
