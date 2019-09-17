int led = 3; //sets up outside LED
void setup() {
  // no setup needed
  Serial.begin(9600); //sets up the moniter
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 20; i++) {
    if (i == 10){
      Serial.print("The loop is equal to 10. The loop # is "); //Says that the variable is equal to 10
      Serial.println (i); //Displays the variable
      digitalWrite(LED_BUILTIN, HIGH); //turns on LED
      digitalWrite(led, HIGH); //turns on LED
      delay(1000); //delays the counting
      }
      else if (i < 10) {
        Serial.print("The loop is less than 10. The loop # is "); //Says that the variable is less than 10
        Serial.println (i); //Displays the variable
        digitalWrite(LED_BUILTIN, HIGH); //turns on LED
        digitalWrite(led, LOW); //turns off LED
        delay(1000); //delays the counting 
        }
        else if (i > 10){
         Serial.print ("The loop is greater than 10. The loop # is "); //Says that the variable is less than 10
         Serial.println (i); //Displays the variable
         digitalWrite(LED_BUILTIN, LOW); //turns off LED 
         digitalWrite(led, HIGH); //turns on LED
         delay(1000); //delays the counting
        }
          
  }
}
