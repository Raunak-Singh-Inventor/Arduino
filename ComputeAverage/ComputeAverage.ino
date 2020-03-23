// Global Variables
float sum = 0;
float avrg = 0;
const int len = 10;
int a[len] = {0, 2, -4, 12, -52, 42, -96, 7, -23, 99};
//const int len = 8;
//int a[len] = {125, 1920, 503, 299, 67, 13578, 7632, 22043};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i=0; i<10; i++) {
    sum = (a[i]+sum);
  }
  avrg = sum/len;
  Serial.println(avrg, 4);
}

void loop() {}
