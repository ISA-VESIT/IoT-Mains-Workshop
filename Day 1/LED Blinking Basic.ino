//Blinking led 

#define ledpin D5   //declare D5 as ledpin

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);  //set ledpin as OUTPUT pin
  Serial.begin(9600);             //Begin serial communication at 9600 baud rate
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledpin,HIGH);   //turn led ON 
  Serial.println("LED is ON"); //print led status on serial monitor
  delay(1000);                        //delay of 1 sec
  
  
  digitalWrite(ledpin,LOW);     //turn led OFF
  Serial.println("LED is OFF"); //print led status on serial monitor
  delay(1000);                         //delay of 1 sec

}
