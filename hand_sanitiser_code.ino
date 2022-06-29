#include<Servo.h>
#define echoPin 4
#define trigPin 5
Servo Myservo;
int long duration;
int distance;
void setup(){
pinMode(13,OUTPUT);
Myservo.attach(3);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
}
void loop()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration*0.034/2);
if(distance<=15){
Myservo.write(90);
digitalWrite(13,HIGH);
}
else {
Myservo.write(0);
digitalWrite(13,LOW);
}
delay(1000);
}
