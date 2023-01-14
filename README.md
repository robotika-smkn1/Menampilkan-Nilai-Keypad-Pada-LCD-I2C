
# :pushpin: Menampilkan-Nilai-Keypad-Pada-LCD-I2C



<p align="center">
  <img src="https://i.postimg.cc/tRZw0xQ4/logo-removebg-preview.png" alt="robotika smkn1 kotabekasi logo"/ style="height:350px;" "width: 350px;">
</p>


[![Version](https://img.shields.io/badge/VENOM-1.0.17-brightgreen.svg?maxAge=259200)]()
[![Stage](https://img.shields.io/badge/Release-Stable-brightgreen.svg)]()
![licence](https://img.shields.io/badge/license-GPLv3-brightgreen.svg)
[![Arduino Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-alpine.svg?left_text=Alpine%20Linux%20Build)](##Link##)
[![Kali Linux Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-kali.svg?left_text=Kali%20Linux%20Build)](##Link##)
[![Armel Kali Linux Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-armel.svg?left_text=Armel%20Kali%20Linux%20Build)](##Link##)
[![Armhf Kali Linux Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-armhf.svg?left_text=Armhf%20Kali%20Linux%20Build)](##Link##)
[![DragonFly BSD Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-dfly.svg?left_text=DragonFly%20Build)](##Link##)
[![FreeBSD 11 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-fbsd-11.svg?left_text=FreeBSD%2011%20Build)](##Link##)
[![FreeBSD 12 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-fbsd-12.svg?left_text=FreeBSD%2012%20Build)](##Link##)
[![OpenBSD 6 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-obsd.svg?left_text=OpenBSD%20Build)](##Link##)
[![NetBSD 8.1 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-netbsd81.svg?left_text=NetBSD%20Build)](##Link##)
[![Coverity Scan Build Status](https://scan.coverity.com/projects/aircrack-ng/badge.svg)](##Link##)



## :inbox_tray: Media Social Instagram

To keep this collection up-to-date need contributors who can add more Program Arduino scripts
||
|--------------|
|:mailbox_with_mail: [artha_sa_](https://www.instagram.com/artha_sa_/)
|:mailbox_with_mail: [dicky_asqaelani26](https://www.instagram.com/dicky_asqaelani26/)
|:mailbox_with_mail: [rahmatnurraya](https://www.instagram.com/rahmatnurraya990/)
|:mailbox_with_mail: [applepi_fthur](https://www.instagram.com/applepi_fthur/)
|:mailbox_with_mail: [robotika-smkn1](https://www.instagram.com/robotika.smkn1kotabekasi/)


# :moneybag: [Donate](https://saweria.co/arthasyarif)

# :briefcase: Barang & Bahan
- Arduino Uno
- Lcd I2c
- I2c Module
- Keypad
- Kabel Female & Male


# :mag: Ilustrasi Arduino

<p align="center">
  <img src="https://indobot.co.id/premium/wp-content/uploads/2020/09/Skema-Rangkaian-300x195.jpg" style="height:205px;" "width:205px;"/>
</p>


# :inbox_tray: Download Libary [Keypad](https://drive.google.com/file/d/14xg9-oXQWmTRA8yiubSbi87VducOoMR3/view?usp=share_link) | [LiquidCrisytal](https://drive.google.com/file/d/1__jesSJj6Ys0w4yy6LwjO2kineDm8PtT/view?usp=share_link)

# :newspaper: Keterangan
- Pin 1 dari kanan (keypad) -> Pin D3 Arduino
- Pin 2 dari kanan (keypad)-> Pin D4 Arduino
- Pin 3 dari kanan (keypad)-> Pin D5 Arduino
- Pin 4 dari kanan (keypad)-> Pin D6 Arduino
- Pin 5 dari kanan (keypad)-> Pin D7 Arduino
- Pin 6 dari kanan (keypad)-> Pin D8 Arduino
- Pin 7 dari kanan (keypad)-> Pin D9 Arduino
- Pin 8 dari kanan (keypad)-> Pin D10 Arduino
- Pin SDA (LCD I2C)-> Pin A4(SDA) Arduino
- Pin SCL (LCD I2C)-> Pin A5(SCL) Arduino
- Pin Vcc (LCD I2C)-> Pin 5v Arduino
- Pin Gnd (LCD I2C)-> Pin Gnd Arduino


# :clipboard: Source Code

```bash

/*
 * 
 * All the resources for this project: smkn1kotabekasi.sch.id
 * Modified by Robotika smkn1 kotabekasi
 * 
 * Created by Robotika smkn1 kotabekasi
 * 
 */
 
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

 

```
