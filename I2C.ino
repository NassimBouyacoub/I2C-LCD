#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
lcd.begin();
lcd.backlight();
}

void loop() {
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Hello World!");
delay(1000);

}
