#include "Arduino.h"
#include "Keypad.h"
#include <LiquidCrystal.h>

int i = 0;
char student_id [5];

// main array
int *orig_array = new int[1];

//array for copying
int *buffer_array = new int[1];

int arr_size = 0;


bool allowDeny = 1;

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};


// digital pins to control keypad
byte rowPins[ROWS] = { 30, 28, 26, 24};
byte colPins[COLS] = { 36, 34, 32};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  Serial.begin(9600);

};
void printList() {
  for ( int i = 0; i <= arr_size ; i++) {
    Serial.println(orig_array[i]);
  }
}

void loop() {

  char key = keypad.getKey();

  switch (key)
  {
    case NO_KEY:
      // nothing to do

      break;
    //RESET
    case '#':
      lcd.clear();
      lcd.print(F("Enter number:"));
      delay(1000);
      lcd.clear();
      printList();
      // reset the counter
      i = 0;
      break;
    // validate the entered id
    case '*':
      if(student_id =="00000"){
        Serial.println(student_id);
        Serial.println("cleared memory");
        delete [] orig_array;
        delete [] buffer_array;
      }
      if (arr_size == 0) {
        orig_array[arr_size] = atoi(student_id);
        arr_size = arr_size + 1;

      } else if (arr_size != 0) {
        orig_array[arr_size] = atoi(student_id);
        //copy orig to buffer
        for ( int i = 0; i <= arr_size ; i++) {
          buffer_array[i] = orig_array[i];
        }
        delete [] orig_array;
        orig_array = new int[arr_size];
        // recopy buffer back to orig
        for (int i = 0; i <= arr_size; i++) {
          orig_array[i] = buffer_array[i];
        }
      }
      arr_size = arr_size + 1;
      delete [] buffer_array;
      lcd.clear();
      lcd.print(F("Number:"));
      lcd.print(student_id);//print the stored number
      delay(1000);
      lcd.clear();
      break;
    default:
      // if not 10 characters yet
      lcd.print(key);
      if (i < 5)
      {
        // add key to userinput array and increment counter
        student_id[i++] = key;
      }

      break;
  }
  //Serial.println(student_id);




}
