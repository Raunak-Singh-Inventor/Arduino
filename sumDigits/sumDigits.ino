void setup() {
  Serial.begin(9600);
  Serial.println(sumDigits(0));     // Should be 0
  Serial.println(sumDigits(2));     // Should be 2
  Serial.println(sumDigits(28));    // Should be 10
  Serial.println(sumDigits(504));   // Should be 9
  Serial.println(sumDigits(2048));  // Should be 14
  Serial.println(sumDigits(32767)); // Should be 25
}
 
void loop() {
  // Do nothing
}
 
int sumDigits(int x) {
  // YOUR CODE GOES HERE

  // storing variables 
  int five_x = int(x/10000); //3
  int four_x = (x - five_x*10000)/1000; //2
  int three_x = (x - five_x*10000 - four_x*1000)/100; //7
  int two_x = (x - five_x*10000 - four_x*1000 - three_x*100)/10; //6
  int one_x = (x - five_x*10000 - four_x*1000 - three_x*100 - two_x*10)/1; //7

  // sum of digits
  int sum_digits  = five_x + four_x + three_x + two_x + one_x;
  
  // note: need return statement
  return sum_digits;
}
