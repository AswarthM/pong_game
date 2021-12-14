#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int a = 0;
int b = 0;
int i;
int pin = 6;
int nip = 8;
int lccd[2][16] = {{1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,},{1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,}};
void setup()
{
  pinMode(pin,INPUT);
  pinMode(nip,OUTPUT);
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.clear();
  lcd.print("|");
  lcd.setCursor(15,0);
  lcd.print("|");
}


void loop()
{
   lcd.setCursor(1,0);
   for(i=1;i<15;i++){
    lcd.setCursor(i,0);
    lcd.print("o");
    delay(150);
       if(i>=1) {lcd.setCursor(i,0);
    lcd.print(" ");}
   }

if(digitalRead(pin) == HIGH){   
lcd.setCursor(14,1);
lcd.print(a++);}

   for(i=14;i>=1;i--){
    lcd.setCursor(i,0);
    lcd.print("o");
    delay(150);
       if(i<16) {lcd.setCursor(i,0);
    lcd.print(" ");}
   } 
if(digitalRead(nip)==HIGH){   
   lcd.setCursor(0,1);
   lcd.print(b++);  }
}
