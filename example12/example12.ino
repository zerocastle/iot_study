
  //  pinMode(2,OUTPUT); //a
//  pinMode(3,OUTPUT); //b
//  pinMode(4,OUTPUT); //c
//  pinMode(5,OUTPUT); //d
//  pinMode(6,OUTPUT); //e
//  pinMode(7,OUTPUT); //f
//  pinMode(8,OUTPUT); //g
 int fnd[] = {2,3,4,5,6,7,8};
 
 int schoolNum[7][8]={{0,0,0,0,1,1,0}, // 1
 {1,1,1,1,0,0,1}, //3
 {1,1,1,1,1,1,0}, //0
 {0,0,0,0,1,1,0}, //1
 {1,1,1,1,1,1,0}, //0
 {1,0,1,1,0,1,1} , //5
 {1,1,1,1,0,0,1} //3
 };

void setup() {
  // put your setup code here, to run once:

for(int i = 0; i < 8; i++){
  pinMode(fnd[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  callSchoolNum();

}

void callSchoolNum(){
    for(int i = 0; i < 7; i++){
    for(int j = 0; j < 8; j++){
      digitalWrite(fnd[j] ,schoolNum[i][j]); 
    }
    delay(1000);
  }
  
}
