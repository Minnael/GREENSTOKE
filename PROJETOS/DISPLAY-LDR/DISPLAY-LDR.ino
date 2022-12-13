#include <GreenStoke.h>

/* 
PINAGEM:
        LDR
  |||||||||||||||
  || GND       ||
  || +5V       ||
  || SINAL: A0 ||
  |||||||||||||||

      DISPLAY
  |||||||||||||||
  ||  +5V      ||
  ||  GND      ||
  ||  SDA: A4  ||
  ||  SCL: A5  ||
  |||||||||||||||
  
COMANDOS UTILIZADOS NO CÓDIGO:
    - greenstoke.valorLdr() -> Coleta os valores de luminosidade.
    - greenstoke.ajustarDisplay(4, 0); -> Define a linha e a coluna onde ficará o valor de luminosidade.
    - greenstoke.limparDisplay(); -> Limpa o display, dando assim, espaço para um novo valor, que pode ou não ser o mesmo.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Imprime o valor de luminosidade no display LCD 
*/

GreenStoke greenstoke;

void setup() {
  greenstoke.configurar();
}

void loop() {
  greenstoke.ajustarDisplay(4, 0); //Seleciona a região do valor no display.
  greenstoke.escreverDisplay(greenstoke.valorLdr()); //Escreve o valor de luminosidade na região do display que foi selecionada.
  delay(3000);  //Pausa por 3s, para dar espaço para o próximo valor de luminosidade.
  greenstoke.limparDisplay();//Limpa o display.
}
