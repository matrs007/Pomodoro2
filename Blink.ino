/*
  
*/

// the setup function runs once when you press reset or power the board
void setup() {

  // initialize digital pin LED_BUILTIN as an output.
  for (int i = 0; i < 13; i++)
  {
    pinMode(i, OUTPUT);    /* code */
  }
  pinMode(2, OUTPUT);
  
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
                      // wait for a second
                        digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);     
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  for (int pinNum = 0; pinNum < 13; pinNum++)
  {
      digitalWrite(pinNum, HIGH);
  }
  

}