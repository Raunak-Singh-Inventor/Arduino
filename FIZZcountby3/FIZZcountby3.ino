int i = 1;

void setup() {
  // put your setup code here, to run once:
  // Initalize serial at 9600 baud
  Serial.begin(9600);
  //print(i)

}

void loop() {
  // put your main code here, to run repeatedly:
  while (i>0) {
    if( i%3 == 0) {
      Serial.println("fizz");
      delay(1000);
      i = i+1;
    }
    else{
      Serial.println(i);
      delay(1000);
      i = i+1;
    }   
  }
}
