#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
      int x=0;

      lcd.printf("107061207\n");
      for(x = 30; x >= 0; x--){
            lcd.locate(0,1);
            lcd.printf("%2i",x);    //conuter display
            wait(1);
      }
}