
/* 
Blink sketch
12th Jan 2015
*/
 
 //creating global variables that are accessible to all parts of the code
 //N.B: variable names are case-sensitive in Arduino
 int LED = 11;  
 int dot = 250;
 int dash = 750;
 int firstLetter = 2;
 int secondLetter = 3;
 int thirdLetter = 4;

//N.B: Every sketch must have a setup() and a loop() funciton. 
void setup(){
  pinMode(LED, OUTPUT);      //In this case, pin 11 is declared to be an output
}

void loop(){
  /*
  syntax of a for loop:
  for(start condition; end condition; increment amount){
    stuff to do while the loop is executing/running
  }
  
  */
  
  
  for(int blinks = 0; blinks < firstLetter; blinks++){
   digitalWrite(LED, HIGH);  //digitalWrite() needs to know first, what pin to change - i.e. "LED" - followed by what value to change it to - i.e "HIGH"
   delay(dot);
   digitalWrite(LED, LOW);
   delay(dot); 
  }

  for(int blinks = 0; blinks < secondLetter; blinks++){
   digitalWrite(LED, HIGH);
   delay(dash);
   digitalWrite(LED, LOW);
   delay(dash); 
  }
  
    for(int blinks = 0; blinks < thirdLetter; blinks++){
   digitalWrite(LED, HIGH);
   delay(dot);
   digitalWrite(LED, LOW);
   delay(dot); 
  }
 
}
