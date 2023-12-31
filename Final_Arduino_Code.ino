#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int C1=213037;
int C2=213048;
int C3=213039;
int C4=213036;
int count1=0;
int count2=0;
int count3=0;
int count4=0;
String id1;
int id;
void setup()
{
  Serial.begin(115200);
  while (!Serial) 
  {
    ; 
  }
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Class SE-A");
  lcd.setCursor(2,1);
  lcd.print("Unoccupied");
}
void loop()
{
  //lcd.setCursor(2,0);
  //lcd.print("Class SE-A");
  if (Serial.available()) 
  {
    id1 = Serial.readString();
    id=id1.toInt();
    //Serial.write(Serial.read());
  }
  if(id==C1)
  {
    count1+=1;
      if (count1%2!=0)
      {
         lcd.clear();
         lcd.setCursor(2,0);
         lcd.print("Class SE-A");
         lcd.setCursor(2,1);
         lcd.print("Ojas Kambli");
      }
      else
      {
        lcd.clear();
         lcd.setCursor(2,0);
         lcd.print("Class SE-A");
         lcd.setCursor(2,1);
         lcd.print("Unoccupied");
      }
  }
  else if(id==C2)
  {
    count2+=1;
      if (count2%2!=0)
      {
         lcd.clear();
         lcd.setCursor(2,0);
         lcd.print("Class SE-A");
         lcd.setCursor(2,1);
         lcd.print("Stan Nadar");
      }
      else
      {
        lcd.clear();
         lcd.setCursor(2,0);
         lcd.print("Class SE-A");
         lcd.setCursor(2,1);
         lcd.print("Unoccupied");
      }
  }
  else if(id==C3)
  {
    count3+=1;
      if (count3%2!=0)
      {
         lcd.clear();
         lcd.setCursor(2,0);
         lcd.print("Class SE-A");
         lcd.setCursor(2,1);
         lcd.print("Shobha Koli");
      }
      else
      {
        lcd.clear();
         lcd.setCursor(2,0);
         lcd.print("Class SE-A");
         lcd.setCursor(2,1);
         lcd.print("Unoccupied");
      }
  }
  else if(id==C4)
  {
    count4+=1;
      if (count4%2!=0)
      {
         lcd.clear();
         lcd.setCursor(2,0);
         lcd.print("Class SE-A");
         lcd.setCursor(2,1);
         lcd.print("Harsh Kale");
      }
      else
      {
        lcd.clear();
        lcd.setCursor(2,0);
        lcd.print("Class SE-A");
        lcd.setCursor(2,1);
        lcd.print("Unoccupied");
      }
  }
  delay(10000);
  id=0;
  id1="";
}