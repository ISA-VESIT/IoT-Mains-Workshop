#define buttonpin D1  //declare D1 as buttonpin 
int button_state = 0; //define button state variable
void setup() {
  // put your setup code here, to run once:
 pinMode(buttonpin,INPUT);  //set buttonpin as INPUT pin
 pinMode(LED_BUILTIN, OUTPUT); //Using Builtin LED or D0
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state = digitalRead(buttonpin);//Read digital value from buttonpin
  Serial.println(button_state);

  if(button_state == HIGH){ 
    digitalWrite(LED_BUILTIN, LOW);
    }
  else{
    digitalWrite(LED_BUILTIN, HIGH);
    }
}
