//Do While Loops
//R. Singh@

//!!!Make sure to call void setup AND void loop!!!
void setup() {
    //Intialize serial at 9600 cycles per second;
    //standard
    Serial.begin(9600);
    //defining integer type variable counter as 1
    int counter = -1;
    do {
        // Do this one time
        //////////////////////////////////////////////
        //Printing in serial monitor what counter is
        Serial.print("The counter is equal to ");
        Serial.println("counter");
        //increasing counter by 1
        counter += 1;
    }
    //This will keep going only if
    //this condition is satisfied
    while (counter>1);
}

void loop() {

}
