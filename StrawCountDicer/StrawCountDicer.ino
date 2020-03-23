// make own dow-while loop

/****************************************
   cmd + T autoformat code
 ***************************************/
#include <LiquidCrystal.h>
#include <Keypad.h>

// takes input form user
char student_id [5];
// converted id to int
int lunch_id;
// initial size of array
int len_id_array  = 0;
//pointer to array
int* p_array ;

char a = 0;
char b = 0;
char c = 0;
char d = 0;
char e = 0;

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const byte ROWS = 4;
const byte COLS = 3;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

// digital pins to control keypad, how you sequence is imporrtant and col pins are from left on keyboard
byte rowPins[ROWS] = { 30, 28, 26, 24};
byte colPins[COLS] = { 36, 34, 32};


//byte rowPins[ROWS] = {9,8,7,6};
//byte colPins[COLS] = {5,4,3,2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  // put your setup code here, to run once:

  //intialize Serial
  Serial.begin(9600);

  //intialize LCD
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly

  // got input from keypad
  a = customKeypad.getKey();
  b = customKeypad.getKey();
  c = customKeypad.getKey();
  d = customKeypad.getKey();
  e = customKeypad.getKey();
  if (a != NO_KEY) {
    Serial.println(a);
    Serial.println(b);
    Serial.println(c);
    Serial.println(d);
    Serial.println(e);
  }
  if (a != 0) {
    //  a = '1';
    //  b = '2';
    //  c = '3';
    //  d = '4';
    //  e = '5';

    student_id[0] = a;
    student_id[1] = b;
    student_id[2] = c;
    student_id[3] = d;
    student_id[4] = e;

    lunch_id = atoi(student_id);
    Serial.println("Lunch Id : ");
    Serial.println(lunch_id);
    // Allocation (let's suppose size contains some value discovered at runtime,
    // e.g. obtained from some external source or through other program logic)
    if (p_array != 0) {
      delete [] p_array;
    }
    len_id_array = sizeof(p_array) / sizeof(p_array[0]);
    p_array = new int [len_id_array + 1];
    Serial.println(len_id_array);
    for (int i = 0; i <= len_id_array; i++) {
      if (p_array[i] == lunch_id) {
        lcd.print("deny");
        delay(5000);
        Serial.println("DENY");

        lcd.clear();
      }
      else {
        lcd.print("allow");
        delay(5000);
        Serial.println("ALLOW");
        lcd.clear();
        p_array[i] = lunch_id;
      }
    }
  } else {
    lcd.print("Ready input ID");
    Serial.println("Ready input ID");
    delay(1000);
    lcd.clear();
  }
}
