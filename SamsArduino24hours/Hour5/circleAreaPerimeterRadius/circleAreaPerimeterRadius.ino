//MAY 12 2019

//The code below finds the area and perimeter of a circle from its radius
//Formula for area of circle - radius * radius * 3.14
//Formula for perimeter of circle - 2 * radius * 3.14

//Global variables:
//Defines the circle radius intially at 0
int radius = 0;
//area float datatype - defined later on
float area;
//area float datatype - defined later on
float perimeter;

void setup() {
    //process data at 9600 bits per second
    Serial.begin(9600);
}

void loop(){
    ////////////////////////////////////////////////////////
    radius = radius + 1;
    Serial.print("After increasing by one radius is ");
    Serial.println(radius);
    ////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////
    //Calculating area of circle
    //Assigned value to float area on line 11
    area = radius * radius * 3.14;
    Serial.print("The circle has an area of ");
    Serial.println(area);
    delay(1000);
    ////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////
    //Calculating perimeter of circle
    //Assigned value to float perimeter on line 13
    perimeter = radius * 2 * 3.14;
    Serial.print("The circle has an perimeter` of ");
    Serial.println(perimeter);
    delay(1020);
    ////////////////////////////////////////////////////////
    
}
