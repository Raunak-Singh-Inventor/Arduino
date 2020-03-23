int x = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.println("start");

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(x);
  delay(500);
  x++;
  
  //Serial.println("redo above");
  
}
