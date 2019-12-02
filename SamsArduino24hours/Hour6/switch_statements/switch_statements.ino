void setup(){
    Serial.begin(9600);
    int test = 3;
    switch (test) {
        case 1:
            Serial.println("First");
            break;
        case 2:
            Serial.println("Two");
            break;
        default:
            Serial.println("No option\a");
    }
    
}

void loop(){

}
