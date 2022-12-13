#ifndef LCD_H
#define LCD_H

#include <LiquidCrystal_I2C.h>

#define col 20 
#define lin  4 
#define ende  0x3F 

LiquidCrystal_I2C lcd(ende,col,lin);

class Lcd {
    private:

    public:
        inline void config(){lcd.init(); lcd.backlight(); lcd.clear(); } 

        inline void posicionar(int coluna, int linha){lcd.setCursor(coluna, linha);}
        inline void escrever(char str[20]){lcd.print(str);}
        inline void limpar(){lcd.clear();}
};

#endif

