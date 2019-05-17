//MAY 13 2019
//###RAUNAK SINGH###//

//IF statement exploration code

//Global variable
unsigned const int x = 50;

void setup() {
    //Everything entered here will run only once

    //################################################    
    //Process at 9600 bits per second
    Serial.begin(9600);

    //Checks if X is greater than 25
    if (x>25) {
        //Prints the value of X
        Serial.print("The value if x is greater than 25 is ");
        Serial.println(x);
        Serial.println("This value is greater than 25");
    }

    //################################################
    else {
        Serial.print("The value of x is not greater than 25!");
    }
}

void loop() {
    //Everything entered here will run infinitely

    //#################################################
    //#################################################
}
