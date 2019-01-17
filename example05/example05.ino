#define RED 7
#define BALL_SW 4
void setup() {
  // put your setup code here, to run once:
  pinMode(RED , OUTPUT);
  pinMode(BALL_SW, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BALL_SW) ){
    digitalWrite(RED , LOW); //LED ON
    Serial.println("on");
  }else{
    digitalWrite(RED, HIGH); // LED OFF
    Serial.println("off");
  }
  delay(500);

}
