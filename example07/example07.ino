#include <Servo.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
#define SERVOPIN 3
Servo myservo;
int pos=0;


void setup() {
  lcd.begin(16,2);
  myservo.attach(SERVOPIN);  
  Serial.begin(9600);
  lcd.setCursor(0,0);
  lcd.print("LCD TEST");
  lcd.setCursor(0,1);
  lcd.print("Hello, WD!");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos = 0; pos <= 180; pos = pos + 15){
    myservo.write(pos);
    Serial.println(pos);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(pos);
    lcd.setCursor(3,1);
    lcd.print("degree");
    delay(1000);
  }
    for(pos = 180; pos >= 0; pos = pos - 15){
    myservo.write(pos);
    Serial.println(pos);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(pos);
    lcd.setCursor(3,1);
    lcd.print("degree");
    delay(1000);
  }
  
}
