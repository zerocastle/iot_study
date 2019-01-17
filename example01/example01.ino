/*decreption : 1초마다 LED를 켰다껐다 하는 프로그램
전류는 + -> - 가야 전류가 흐른다.
*/

int ledPin = 7; // 아두이노 7번핀과 연결된 변수
// 아두이노에 전원을 인가시키면 자동으로 호출되는 함수
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin , OUTPUT); // 출력 핀으로 설정
}

// 계속 반복되는 함수
void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(ledPin , HIGH); // 
 // delay(1000); // 
  digitalWrite(ledPin,LOW); 
  delay(1000);
}
