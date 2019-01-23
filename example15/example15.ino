int position_pin[] = {10,11,12,13};               //4자리 결정 핀
int segment_pin[] = {2,3,4,5,6,7,8,9};     //세그먼트 제어 핀
const int delayTime = 5; 
void setup() {
  // put your setup code here, to run once:
   for(int i = 0; i < 4; i++) {
     pinMode(position_pin[i], OUTPUT);
      digitalWrite(position_pin[i],HIGH);
  }

   //세그먼트 제어 핀 출력용으로 설정
  for(int i = 0; i < 8; i++) {
    pinMode(segment_pin[i], OUTPUT);
    digitalWrite(segment_pin[i],LOW);
  }
  

}

void loop() {
   segmentClear();
   digitClear();
   digitalWrite(position_pin[0],LOW);
   callFive();
   delay(delayTime);

   segmentClear();
   digitClear();
   digitalWrite(position_pin[1],LOW);
   callFive();
   delay(delayTime);

   segmentClear();
   digitClear();
   digitalWrite(position_pin[2],LOW);
   callNine();
   delay(delayTime);

    segmentClear();
   digitClear();
   digitalWrite(position_pin[3],LOW);
   callThree();
   delay(delayTime);
}

void digitClear() {
    for(int j = 0; j < 4; j++){
      digitalWrite(position_pin[j],HIGH);
    }
}
void segmentClear() {
  for(int i = 0; i < 8; i++) {
    digitalWrite(segment_pin[i], LOW);
  }
}


void callFive(){
   digitalWrite(2,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
}
void callNine(){
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
}
void callThree(){
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
}
