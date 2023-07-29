

int ENA=10;
int IN1=3;
int IN2=5;
int IN3=6;
int IN4=9;
int ENB=11;
void setup() {
Serial.begin(9600);
pinMode(ENA,OUTPUT);
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(ENB,OUTPUT);
analogWrite(ENA,128);
analogWrite(ENB,128);
  }

void loop() {

if(Serial.available()>0){
  char reading= Serial.read();
  if(reading=='F')
{
digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
}
else if(reading=='B')
{
  digitalWrite(IN1,0);
digitalWrite(IN2,1);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
}
else if(reading=='L')
{
  digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
}
else if(reading=='R')
{
  digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
}
else if(reading=='S')
{
  digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
}
}
}