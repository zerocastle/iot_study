//1. // Hello 문자가 디스플레이되는 코드
#define SPACE { \
    {0, 0, 0, 0, 0, 0, 0, 0},  \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0} \
}

#define k { \
    {0, 1, 0, 0, 0, 1, 0, 0},  \
    {0, 1, 0, 0, 1, 0, 0, 0}, \
    {0, 1, 0, 1, 0, 0, 0, 0}, \
    {0, 1, 1, 0, 0, 0, 0, 0}, \
    {0, 1, 1, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 1, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 1, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 1, 0, 0} \
}

#define y { \
    {1, 0, 0, 0, 0, 0, 0, 1},  \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 0, 1, 0, 0, 1, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0} \
}
#define s{ \
    {1, 1, 1, 1, 1, 1, 1, 1},  \
    {1, 0, 0, 0, 0, 0, 0, 0}, \
    {1, 0, 0, 0, 0, 0, 0, 0}, \
    {1, 0, 0, 0, 0, 0, 0, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {0, 0, 0, 0, 0, 0, 0, 1}, \
    {0, 0, 0, 0, 0, 0, 0, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1} \
}
 
 
//#define H { \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 1, 1, 1, 1, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}  \
//}
// 
// 
//#define E  { \
//    {0, 1, 1, 1, 1, 1, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 1, 1, 1, 1, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 1, 1, 1, 1, 1, 0}  \
//}
// 
// 
//#define L { \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 0, 0}, \
//    {0, 1, 1, 1, 1, 1, 1, 0}  \
//}
// 
// 
//#define O { \
//    {0, 0, 0, 1, 1, 0, 0, 0}, \
//    {0, 0, 1, 0, 0, 1, 0, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 1, 0, 0, 0, 0, 1, 0}, \
//    {0, 0, 1, 0, 0, 1, 0, 0}, \
//    {0, 0, 0, 1, 1, 0, 0, 0}  \
//}
// 
//#define W { \
//    {1, 0, 0, 0, 0, 0, 0, 1},\
//    {1, 0, 0, 0, 0, 0, 1, 0},\
//    {1, 0, 0, 0, 0, 0, 1, 0},\
//    {0, 1, 0, 1, 0, 0, 1, 0},\
//    {0, 1, 0, 1, 0, 1, 0, 0},\
//    {0, 1, 0, 1, 0, 1, 0, 0},\
//    {0, 0, 1, 1, 0, 1, 0, 0},\
//    {0, 0, 0, 1, 1, 0, 0, 0},\
//}
// 
//#define R { \
//    {1, 1, 1, 1, 1, 0, 0, 0},\
//    {1, 0, 0, 0, 1, 0, 0, 0},\
//    {1, 0, 0, 0, 1, 0, 0, 0},\
//    {1, 1, 1, 1, 1, 0, 0, 0},\
//    {1, 0, 1, 0, 0, 0, 0, 0},\
//    {1, 0, 0, 1, 0, 0, 0, 0},\
//    {1, 0, 0, 0, 1, 0, 0, 0},\
//    {1, 0, 0, 0, 0, 1, 0, 0},\
//}
// 
//#define D { \
//    {1, 1, 1, 1, 1, 0, 0, 0},\
//    {1, 1, 0, 0, 1, 1, 0, 0},\
//    {1, 1, 0, 0, 0, 1, 1, 0},\
//    {1, 1, 0, 0, 0, 1, 1, 0},\
//    {1, 1, 0, 0, 0, 1, 1, 0},\
//    {1, 1, 0, 0, 0, 1, 1, 0},\
//    {1, 1, 0, 0, 1, 1, 0, 0},\
//    {1, 1, 1, 1, 1, 0, 0, 0},\
//}
//표현할 글자 수
const int numPatterns = 11;
 
//표현할 문자 패턴, numPatterns 의 갯수에 맞게 표시
byte patterns[numPatterns][8][8] = {
  //H,E,L,L,O,SPACE
 k,y,s,SPACE
};
 
int pattern = 0;



// 2-dimensional array of row pin numbers:
const int row[8] = {
  2, 7, 19, 5, 13, 18, 12, 16
};

// 2-dimensional array of column pin numbers:
const int col[8] = {
  6, 11, 10, 3, 17, 4, 8, 9
};

// 2-dimensional array of pixels:
int pixels[8][8];

// cursor position:
int x = 5;
int y = 5;

// 시간
unsigned long time1;

void setup() {

  Serial.begin(9600);
  // initialize the I/O pins as outputs iterate over the pins:
  for (int thisPin = 0; thisPin < 8; thisPin++) {
    // initialize the output pins:
    pinMode(col[thisPin], OUTPUT);
    pinMode(row[thisPin], OUTPUT);
    // take the col pins (i.e. the cathodes) high to ensure that the LEDS are off:
    digitalWrite(col[thisPin], HIGH);
  }

  // initialize the pixel matrix:
  for (int x = 0; x < 8; x++) {
    for (int y = 0; y < 8; y++) {
      pixels[x][y] = HIGH;
    }
  }
  time1 = millis();

}

void loop() {

 changChar(); 
  refreshScreen();
  if ( millis() - time1 > 1000) {
    pattern++;
    time1 = millis();  
  }
  
  pattern = pattern % numPatterns;
  
  
  
   
}

void readSensors() {
  // turn off the last position:
  pixels[x][y] = HIGH;
  // read the sensors for X and Y values:
  x =  random(8);
  y = random(8);
  // set the new pixel position low so that the LED will turn on in the next
  // screen refresh:
  pixels[x][y] = LOW;

}

void changChar() {
  for(int i=0; i<8; i++) {
    for(int j=0; j<8; j++) {
      pixels[i][j] = patterns[pattern][i][j];
    }
  }
}

void refreshScreen() {

 
  // iterate over the rows (anodes):
  for (int i = 0; i < 8; i++) {
       
       for (int j = 0; j < 8; j++) {
           
           if (pixels[i][j] == 1) {
              digitalWrite(row[i], 0);
              digitalWrite(col[j], 1); 
              delay(1);
              digitalWrite(row[i], 1);
              digitalWrite(col[j], 0); 
           } else {
              digitalWrite(col[j], 0); 
           }
           
       }
  }
 
}
