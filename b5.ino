/*
  Blink_2
  Change the .
  See Pibot.org/help/1 for help with this sketch
 */


// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(9600);  
  Serial.print("Can you read this or not?");  
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.print("Hello World \n");   
  delay(2000);
}
// Click "Upload" (Right arrow) from the above menu to send this code to the microcontroller.  

