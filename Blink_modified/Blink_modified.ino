
const int LED = 13;

//######################################################################
// MAIN FUNCTION
//the setup function runs once when you press reset or power the board
//#######################################################################

void setup() {

  myloop();
}

//######################################################
// the loop function runs over and over again forever
//NOTE: PART oF MAIN FUNCTION
//####################################################

void loop(){
  
}

//####################
//Raunak local loop
//####################

void myloop() {
    // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  for (int i= 0; i<3; i++) {
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                       // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(500);                       // wait for a second
  }
}
