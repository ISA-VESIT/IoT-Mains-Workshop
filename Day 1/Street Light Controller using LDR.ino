#define LDRpin A0   //declare A0 as LDRpin
#define ledpin D5   //declare D5 as ledpin
//int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);  //set ledpin as output pin 
  pinMode(LDRpin, INPUT);   //set LDRpin as input pin
  delay(100);

}

void loop() {
  int light = analogRead(LDRpin); //reads analog values from LDRpin
  Serial.println(light); 
/*................................. First check and observe analog values in light and dark ........................................
.................................  then keep the threshold value according to your lightings ....................................... */        
  
  if(light <100)  //Adjust according to your lightings
  {
    digitalWrite(ledpin, HIGH);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
  delay(100);
}
