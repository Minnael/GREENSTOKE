#include <GreenStoke.h>

//DISPLAY DECLARAÇÃO/VARIÁVEIS:
#include <LiquidCrystal_I2C.h>
#define col 20 
#define lin  4 
#define ende  0x3F 

LiquidCrystal_I2C lcd(ende,col,lin);

//SERVO 
#include <Servo.h>
Servo servo;

//DECLARAÇÃO BIBLIOTECA:
GreenStoke::GreenStoke():
    led1(LED_1), led2(LED_2), botao(BOTAO), ultrassom(ECHO, TRIG), ldr(LDR){}

//CONFIGURAÇÕES INICIAIS:
void GreenStoke::configurar(){
	Serial.begin(9600);

	botao.config();
	ultrassom.config();
	ldr.config();

	lcd.init(); 
	lcd.backlight(); 
	lcd.clear(); 

	servo.attach(SERVO);
}

//PARTE RELACIONADA A TROCA DE DELAY POR PAUSA:
void GreenStoke::pausa(int tempo){
	delay(tempo);
}

//PARTE RELACIONADA A LÓGICA DOS lEDS:
void GreenStoke::ligarTodosLeds(){
	led1.ligar();
	led2.ligar();
}

void GreenStoke::desligarTodosLeds(){
	led1.desligar();
	led2.desligar();
}

void GreenStoke::ligarLed(const int led)const{
	switch(led){
		case 1:
			led1.ligar();
		break;
		case 2:
			led2.ligar();
		break;
		default:
		break;	
	}
}

void GreenStoke::desligarLed(const int led)const{
    switch(led){
		case 1:
			led1.desligar();
		break;
		case 2:
			led2.desligar();
		break;
		default:
		break;	
	}
}

//PARTE RELACIONADA A LÓGICA DO DISPLAY:
void GreenStoke::ajustarDisplay(int coluna, int linha){
	lcd.setCursor(coluna, linha);
}

void GreenStoke::escreverDisplay(char str[20]){
	lcd.print(str);;
}

void GreenStoke::limparDisplay(){
	lcd.clear();
}

void GreenStoke::servoAngulo(int angulo){
	servo.write(angulo); 
}



