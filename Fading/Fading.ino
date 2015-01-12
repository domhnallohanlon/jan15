

int brightness = 0; //intensity of the LED
int fadeAmount = 5; // amount we want to vary the brightness by

int LED = 9;

void setup(){
  
 pinMode(LED, OUTPUT); 

} //end of setup()

void loop(){
  
  analogWrite(LED, brightness);           //use the analogWrite function turn the LED on for a certain amount of time i.e. the brightness value 
  brightness = brightness + fadeAmount;   //change brightness by the fade amount
  delay(30);
  
  /*
  The if() statement checks to see if have gone beyond either the minimum OR the maximum values for analogWrite()
  In other words, is brightness less than or equal to 0, or is it greater than or equal to 255
  In the code the logical operator OR is symbolised by two pipes ||
  If we have gone beyond either of these the sign on the fadeAmount is reversed, so positives become negative and vice versa.
  */
  
  if (brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;    
  }
  
  
}
