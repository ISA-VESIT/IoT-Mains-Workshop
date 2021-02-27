//Blinking LEDs by user input from serial monitor
#define ledPin D5 // declare D5 as ledpin
int numBlinks; // variable to store the number of blinks

void setup()
{
  pinMode(ledPin, OUTPUT);  // set D5 pin as output pin
  digitalWrite(ledPin, LOW); // set the pin value on low at the begin
  Serial.begin(9600);
}
void loop()
{
  Serial.println("How Many Times Do You Want the Red LEDs to blink?"); //Prompt User for Input
  while (Serial.available() == 0) {
    // Wait for User to Input Data
  }
  numBlinks = Serial.parseInt(); //Read the data the user has input
  Serial.print("The user has choosen the number:");
  Serial.println(numBlinks);
  Serial.println(" ");
  //for loop for blinking LED multiple times according to the user input
  for (int counter = 1; counter <= numBlinks; counter++) {    
    Serial.println("LED is turned on");
    digitalWrite(ledPin, HIGH);
    delay(1000);
    Serial.println("LED is turned off");
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
}
