int led = 13; 
  
void setup() { 
 
  
  pinMode(led, OUTPUT); 
 
} 
  
void loop() { 
  digitalWrite(led, HIGH);        // turn the LED on (HIGH is the voltage level) 
  delay(10);                               // wait for a 10 ms 
  digitalWrite(led, LOW);        // turn the LED off by making the voltage LOW 
  delay(10);                              // wait for a 10 ms 
} 
