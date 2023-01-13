#include <LiquidCrystal_I2C.h>

#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const byte ROWS = 4;

const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {

  {'1', '2', '3', 'A'},

  {'4', '5', '6', 'B'},

  {'7', '8', '9', 'C'},

  {'*', '0', '#', 'D'}

};

byte rowPins[ROWS] = {10, 9, 8, 7};

byte colPins[COLS] = {6, 5, 4, 3};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup(){

lcd.init();                      // initialize the lcd

lcd.init();

// Print a message to the LCD.

lcd.backlight();

lcd.print("Keypad Arduino"); //Display a intro message

lcd.setCursor(0, 1);   // set the cursor to column 0, line 1

lcd.print("By: Indobot "); //Display a intro message

delay(2000); //Wait for display to show info

lcd.clear(); //Then clean it

}

void loop(){

  char customKey = customKeypad.getKey();




  if (customKey){

    lcd.setCursor(0,0);

    lcd.print("Press: ");

    lcd.print(customKey);

    delay(100);

  }

}
