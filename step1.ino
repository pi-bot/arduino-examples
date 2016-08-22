/*
  Blink_1
  Let there be light! Turn your LED on and off repeatedly.
  See Pibot.org/help/1 for help with this sketch
 */
 
// Pin 12 Replace this with the one that you connect your led and resistor too
// give it a name:
int led = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
// Click "Upload" (Right arrow) from the above menu to send this code to the microcontroller.  

