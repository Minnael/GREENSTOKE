#include <GreenStoke.h>

/* 
PINAGEM:
       SONAR
  |||||||||||||||
  || GND       ||
  || +5V       ||
  || TRIG:  6  ||
  || ECHO:  7  ||
  |||||||||||||||

       SERVO
  |||||||||||||||
  || GND       ||
  || +5V       ||
  || SINAL: 9  ||
  |||||||||||||||
  
COMANDOS UTILIZADOS NO CÓDIGO:
    - greenstoke.valorSonarCentimetros() -> Coleta os valores de distância do sensor de ultrassom em centimetros.
    - greenstoke.servoAngulo(angulo); -> Define um angulo para o servo motor.

O QUE DANADO ESSE CÓDIGO FAZ?
    - Ele possui um princípio de funcionamento similar a uma cancela eletrônica. Dessa forma, se o sensor de ultrassom retornar um valor
      menor ou igual a 4cm o a cancela irá abrir.
*/

GreenStoke greenstoke;

void setup() {
  greenstoke.configurar();
}

void loop() {
  if (greenstoke.valorSonarCentimetros() <= 4){ //Verifica se o sensor recebeu um valor menor ou igual a 4cm.
    greenstoke.servoAngulo(90); //Deixa o angulo do servo motor em 90°, sinalizando que a cancela está aberta.
  }
  else{ // Caso angulo seja maior que 4cm a cancelara deverá ficar em 180°, ou seja, fechada.
    greenstoke.servoAngulo(180); 
  }
}
