#define ledPin D5    // LED connected to D5 pin

void setup() {
  pinMode(ledPin, OUTPUT);  //set ledPin as OUTPUT
  Serial.begin(9600);       //Begin Serial Communication
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue); 
    Serial.println("LED turning ON");
    // wait for 50 milliseconds to see the dimming effect
    delay(50);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    Serial.println("LED turning OFF");
    // wait for 50 milliseconds to see the dimming effect
    delay(50);
  }
}
