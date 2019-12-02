const int trigPin =11;
const int echoPin =12;

int piezoPin = 2;


float distance =0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  //pinMode(piezoPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = getDistance();
  Serial.println(F("Distance inches is :"));
  Serial.println(distance);
  if (distance <=10){
    tone(piezoPin,2100,1800);
  }
  delay(100); 
  
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
