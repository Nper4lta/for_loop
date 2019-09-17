// ============================================================================
const int arduinoBoardLED = 13; // LED on pin 13
int led = 3; //sets up outside LED
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);               // Use Serial Monitor to debug
  pinMode(arduinoBoardLED, OUTPUT); // initialize the digital pin as an output.
  Serial.println("Running The Seup Function");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  delay(1000); // just a small delay to slow the main loop down
  Serial.println("Starting Main Loop Code");
  // put your code between here
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
        else{
         Serial.print ("The loop is greater than 10. The loop # is "); //Says that the variable is less than 10
         Serial.println (i); //Displays the variable
         digitalWrite(LED_BUILTIN, LOW); //turns off LED 
         digitalWrite(led, HIGH); //turns on LED
         delay(1000); //delays the counting
        }  
  } 

  // and here
  Serial.println("Ending Main Loop Code");
}

