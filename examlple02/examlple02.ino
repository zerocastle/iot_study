#define ledPin 10
int delayTime = 100;
// 딜레이타임이 증가하는지 여부에 대한 변수 isup 선언 
int isup = 1; // 1 이면 증가 , 0이면 감소

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT); //출력핀으로 설정
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(delayTime);
  digitalWrite(ledPin,LOW);
  delay(200);
  Serial.println(delayTime);
  if(isup == 1){
    delayTime = delayTime + 100; // 딜렉이값이 커지면 천천히 느려진다.
    if(delayTime > 1000){
      isup = 0;
      }
  }else{
    // 딜레이타임이 감소
     delayTime = delayTime - 100; // 딜렉이값이 커지면 천천히 느려진다.
    if(delayTime < 100){
      isup = 1;
    }
  }

}

void slower(int delayTime){
  int i = delayTime;
  for(i = delayTime; i == 100; i = i - 10){
    delayTime = delayTime - 10;
  }
  
}
