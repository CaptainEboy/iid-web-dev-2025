#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const char* text = "Krystalbal Schools Robotic Class, 2025            ";
int textLength = strlen(text);
int pos = 0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 1);
}

void loop() {
  // clear the display
  lcd.setCursor(0, 0);
  lcd.print("                ");
  
  // print the scrolling text
  lcd.setCursor(0, 0);
  for (int i = 0; i < 16; i++) {
    lcd.print(text[(pos + i) % textLength]);
  }
  
  // increment the position
  pos++;
  
  // wait for a short period
  delay(200);
}
