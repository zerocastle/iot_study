
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT); //a
  pinMode(3,OUTPUT); //b
  pinMode(4,OUTPUT); //c
  pinMode(5,OUTPUT); //d
  pinMode(6,OUTPUT); //e
  pinMode(7,OUTPUT); //f
  pinMode(8,OUTPUT); //g
  int find[] = {2,3,4,5,6,7,8};
  for(int j = 2; j <= 8; j++){
    digitalWrite(j, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int j = 2; j <= 7; j++){
    digitalWrite(j, HIGH);
  } delay(250);
  
  for(int j = 2; j <= 8; j++){
    digitalWrite(j, LOW);
  } delay(250);
jo();
}
void jo(){
   digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(250);
  
   for(int j = 2; j <= 8; j++){
    digitalWrite(j, LOW);
  } 
  
  delay(250);
  
}
