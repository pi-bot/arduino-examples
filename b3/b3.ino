/*
  Blink_2
  Change the .
  See Pibot.org/help/1 for help with this sketch
 */


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(13, OUTPUT); 
  digitalWrite(13, HIGH);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
}
// Click "Upload" (Right arrow) from the above menu to send this code to the microcontroller.  

