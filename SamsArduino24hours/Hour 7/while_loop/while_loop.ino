void setup() {
    //Initialize Serial Monitor
    Serial.begin(9600);
    //integer datatype
    int counter = 1;
    while (counter<5) {
        Serial.print("The counter value is ");
        Serial.println(counter);
        //Increase counter by 1
        counter += 1;
    }
    Serial.println("Loop Ends");
}

void loop() {
    
}