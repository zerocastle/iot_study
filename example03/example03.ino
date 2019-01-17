int ledPin = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //s(...) 모스부호 3번의 점
  for(int x = 0; x<3; x++){
    digitalWrite(ledPin , HIGH);
    delay(150);
    digitalWrite(ledPin , LOW);
    delay(200);
  }
  delay(100);
  
   for(int x = 0; x<3; x++){
    digitalWrite(ledPin , HIGH);
    delay(400);
    digitalWrite(ledPin , LOW);
    delay(100);
  }
  delay(100);

    for(int x = 0; x<3; x++){
    digitalWrite(ledPin , HIGH);
    delay(150);
    digitalWrite(ledPin , LOW);
    delay(200);
  }
  delay(1000);
  

}
