#ifndef _GREENSTOKE_H
#define _GREENSTOKE_H

#include <Arduino.h>

#include "Pinagem.h"
#include "Led.h"    
#include "Botao.h"
#include "Ultrassom.h"
#include "Ldr.h"

class GreenStoke {  

    private:
        Led	led1, led2;
        Botao botao;
        Ultrassom ultrassom;
        Ldr ldr;

    public:
        GreenStoke();
        void configurar();
        void pausa(int tempo);

        //LEDS
        void ligarLed(const int led)const;
        void desligarLed(const int led)const;
        void ligarTodosLeds();
        void desligarTodosLeds();

        //BOTÃO
        inline const bool botaoPressionado()const{return botao.estaPressionado();}

        //SONAR
        inline const float valorSonarMetros()const{return ultrassom.coletarDadosMetros();}
        inline const float valorSonarCentimetros()const{return ultrassom.coletarDadosCentimetros();}
        inline const float valorSonarMilimetros()const{return ultrassom.coletarDadosMilimetros();}

        //LCD
        void limparDisplay();
        void escreverDisplay(char str[20]);
        void ajustarDisplay(int coluna, int linha);

        //LDR
        inline const int valorLdr()const{return ldr.coletarValores();}

        //SERVO
        void servoAngulo(int angulo);
}; 

#endif