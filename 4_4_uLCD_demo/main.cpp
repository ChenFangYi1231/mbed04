// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    int i;

    uLCD.background_color(0xFFFFFF);
    uLCD.cls();
    // basic printf demo = 16 by 18 characters on screen
    //Default Green on black text
    uLCD.color(BLUE);
    uLCD.textbackground_color(WHITE);
    uLCD.printf("\n107061207\n");
    uLCD.color(GREEN);
    uLCD.printf("\ncount down : \n");
    for(i = 30; i >= 0; i--){
        uLCD.locate(0,3);
        uLCD.printf("\n%2d\n", i);
        wait(1);
    }
}