//Define Pins
#define RED 7
#define BUZZ 8 // 부저
#define BALL_SW 4
#define DO 523 //도
#define RE 587 //레
#define ME 659 //미
#define PA 698 //파
#define SOL 784 //솔
#define LA 880 //라
#define SI 988 //시
#define DO_A 1047 //도
#define BALL_SW 4

int analogPin = 0;
int val = 0;
float temp = 0;

int melody[]= {DO , RE , ME , PA , SOL , LA , SI, DO_A};
int schoolSong[]= {SOL , SOL ,LA , LA ,SOL,SOL, ME , SOL , SOL , ME , ME , RE};
int duration = 500;


void setup() {
  analogReference(INTERNAL); //Internal voltage reference
  pinMode(RED, OUTPUT);
  pinMode(BUZZ, OUTPUT); // 부저
  pinMode(BALL_SW, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
   val = analogRead(analogPin); // Read ADC
   val = map(val,0,1023,0,1100);
    temp = (float)val/10;
    Serial.println(temp , 1); //output
 
  
    if( digitalRead(BALL_SW) ){
      digitalWrite(RED, LOW); //LED ON
      Serial.println(BALL_SW);
      for(int i= 0; i < 12; i++){
        tone(BUZZ , schoolSong[i], duration);
        delay(600);
        if(i==11) secondMelody();
      }
//      secondMelody(); // 두번째 호출
      Serial.println("on");
    }
    else {
      digitalWrite(RED, HIGH); //LED OFF   
      digitalWrite(BUZZ, HIGH); //LED OFF
      Serial.println("off");
    }

}

void secondMelody(){
  Serial.println("secondMelody");
  delay(500);
  int secondMelody[]= {SOL , SOL , LA , LA , SOL ,SOL , ME, SOL , ME ,RE , ME , DO};
  for(int i = 0; i < 12; i++){
    tone(BUZZ , secondMelody[i], duration);
    if(i == 7){
      delay(700);
    }
  }
}
