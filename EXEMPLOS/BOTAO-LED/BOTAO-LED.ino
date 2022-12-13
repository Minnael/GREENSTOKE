#include <GreenStoke.h>

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
