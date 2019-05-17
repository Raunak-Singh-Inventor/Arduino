//MAY 12 2019


void setup() {
    //process data at 9600 bits per second
    Serial.begin(9600);
    
    Serial.print("absolute value is:");
    Serial.println(abs(-2));

    Serial.print("Constraint: ");
    Serial.println(constrain(8, 5, 10));

    Serial.print("MAP: ");
    Serial.println(map(3000,  0, 1023, 0, 255));    
}

void loop(){
    
    
}
