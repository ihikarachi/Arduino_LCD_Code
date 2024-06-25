//Code:
  #include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int count = 0;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, iHi!");
  pinMode(6,INPUT);
}

void loop() {
 lcd.clear();
 lcd.setCursor(0,1);
 lcd.print("Car: ");
 lcd.print(count);
 
 int x = digitalRead(6);
 if (x==0)
 {
  count++;
 delay(1000);
 }
 delay(200);
}
