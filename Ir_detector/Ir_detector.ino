
int analogPin=A0;                 //Readings from sensor to analog pin 0  
int limit = 900;            // play with system to find this limit
int sensorValue =0;


void setup()    
 {  
\
  Serial.begin(9600);        
 }  
 
void loop()  
 {  
  int val=analogRead(analogPin);  //photodiode reading
  Serial.print("Sensor = ");
  Serial.println(val);      

   delay(200);  
 }  
