int i = 30;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (i<=30 && i>=0) {
    Serial.println(i);
    delay(600);
    i = i-1;
  }
}
