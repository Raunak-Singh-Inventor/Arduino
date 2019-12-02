void setup(){ 
    /////////////////////////////////////////   
    //Defines the variable test as integer
    int test = 2;
    /////////////////////////////////////////
    //intialized serial
    Serial.begin(9600);
    /////////////////////////////////////////
    //########################################################################
    //Checks if test equals 1
    if (test==1) {
        Serial.println("The first option was selected");
    }
    //Checks if test equals 2
    else if (test==2){
        Serial.println("The second option was selected");
    }
    //Checks if test equals 3
    else if (test==3){
        Serial.println("The third option was selected");
    }
    //if test is not equal to 1,2, or 3
    else {
        Serial.print("None of the choices was selected\a");
    }
    //########################################################################
}

void loop() {

}