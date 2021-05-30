#include<Servo.h>
Servo servo;

String data; 

void setup() {
  
servo.attach(9);// attaching servo morot to pin 9
Serial.begin(9600);//setting baud rate to 9600 bauds/s
Serial.setTimeout(10);//setting time out to 10 ms 

}

void loop() {}

void serialEvent(){
  
  data= Serial.readString();
  
  if(data=="open")
    servo.write(90);
    
  if(data=="close")
    servo.write(0);
}
