#ifndef LDR_H
#define LDR_H

class Ldr {
	private:
        const int pinoLdr;
        double valorLdr;

	public:
        Ldr(const int pin):pinoLdr(pin){}
        inline void config(){pinMode(pinoLdr, INPUT);} 
        
        int coletarValores(){
            valorLdr = analogRead(pinoLdr);
            return (valorLdr);
        }
};

#endif