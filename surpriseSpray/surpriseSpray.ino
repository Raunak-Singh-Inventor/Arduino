//include the servo library
#include <Servo.h>

//moves servo to normal position
int servoPosition;

//Create a servo object
Servo myservo;  

//Global variables
const int trigPin = 6;
const int echoPin = 7;

//intializes variable distance
float distance =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Servo-Digital 9
  myservo.attach(9); 
  
  //set pins to Input and Output
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = getDistance();
  if (distance <= 5) { 
    myservo.write(90);
}
  }

float getDistance(){
  float echoTime;
  float calculatedDistance;

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  echoTime = pulseIn(echoPin, HIGH);

  calculatedDistance =echoTime/148.0;
  return calculatedDistance;
}
