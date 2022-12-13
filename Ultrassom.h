#ifndef ULTRASSOM_H
#define ULTRASSOM_H

class Ultrassom {
    private:
        const int pinoEcho;
        const int pinoTrig;

        unsigned long tempo;
        double distancia;

    public:
        Ultrassom(const int pino_echo, const int pino_trig):pinoEcho(pino_echo), pinoTrig(pino_trig){}

        inline void config(){pinMode(pinoTrig, OUTPUT); pinMode(pinoEcho, INPUT); digitalWrite(pinoTrig, LOW);} 
        
        float coletarDadosCentimetros(){
            digitalWrite(pinoTrig, HIGH);
            delayMicroseconds(10);
            digitalWrite(pinoTrig, LOW);

            tempo = pulseIn(pinoEcho, HIGH);

            distancia = tempo/55; 

            return (distancia);      
        }  

        float coletarDadosMetros(){
            digitalWrite(pinoTrig, HIGH);
            delayMicroseconds(10);
            digitalWrite(pinoTrig, LOW);

            tempo = pulseIn(pinoEcho, HIGH);

            distancia = tempo/55; 

            return (distancia/100);     
        }

        float coletarDadosMilimetros(){
            digitalWrite(pinoTrig, HIGH);
            delayMicroseconds(10);
            digitalWrite(pinoTrig, LOW);

            tempo = pulseIn(pinoEcho, HIGH);

            distancia = tempo/55; 

            return (distancia*10);      
        }  

};

#endif