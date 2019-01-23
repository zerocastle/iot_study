/*
  네 자리 7세그먼트 연결하기

  이 스케치는 kocoaFAB에서 만들었습니다.
  이 스케치는 무료로 사용할 수 있습니다.
*/

int position_pin[] = {10,11,12,13};               //4자리 결정 핀
int segment_pin[] = {2,3,4,5,6,7,8,9};     //세그먼트 제어 핀
const int delayTime = 5;                      //일시정지 시간

//0 ~ 9를 표현하는 세그먼트 값
byte data[] = {0xFC, 0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE4, 0xFE, 0xE6};

void setup() {
  //4자리 결정 핀 출력용으로 설정
  for(int i = 0; i < 4; i++) {
     pinMode(position_pin[i], OUTPUT);
  }

  //세그먼트 제어 핀 출력용으로 설정
  for(int i = 0; i < 8; i++) {
    pinMode(segment_pin[i], OUTPUT);
  }
}

void loop() {
  show(1,1);                //첫 번째 자리, 1출력
  delay(delayTime);         //0.005초 일시정지
  show(2,2);                //두 번째 자리, 2출력
  delay(delayTime);         //0.005초 일시정지
  show(3,3);                //세 번째 자리, 3출력
  delay(delayTime);         //0.005초 일시정지
  show(4,4);                //네 번째 자리, 4출력
  delay(delayTime);

  count();                //count함수 호출, count 함수 실행시 주석 해제(//를 지우면 됩니다.)
}

void show(int position, int number) {
  //4자리 중 원하는 자리 선택
  for(int i = 0; i < 4; i++) {
    if(i + 1 == position){
      digitalWrite(position_pin[i], LOW);
    } else {
      digitalWrite(position_pin[i], HIGH);
    }
  }

  //8개 세그먼트를 제어해서 원하는 숫자 출력
  for(int i = 0; i < 8; i++){
     byte segment = (data[number] & (0x01 << i)) >> i;
     if(segment == 1){
       digitalWrite(segment_pin[7 - i], HIGH);
     } else {
       digitalWrite(segment_pin[7 - i], LOW);
     }
  }
}

/*
 0001부터 하나씩 카운트하는 함수
*/
void count() {
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      for(int k = 0; k < 10; k++) {
        for(int l = 0; l < 10; l++) {
          show(1,i);
          delay(delayTime);
          show(2,j);
          delay(delayTime);
          show(3,k);
          delay(delayTime);
          show(4,l);
          delay(delayTime);
        }
      }
    }
  }
  delay(1000);
}
