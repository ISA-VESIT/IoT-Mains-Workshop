// Airplane Fall Alert System
#define ledpin D5   //declare D5 as ledpin

#include "Wire.h"
#include <MPU6050_light.h>

MPU6050 mpu(Wire);
float x,y,z;

void setup() {
  Serial.begin(9600);
  Wire.begin();     // join i2c bus (address optional for master)
  pinMode(ledpin,OUTPUT);  //set ledpin as OUTPUT pin
  
  byte status = mpu.begin();
  Serial.print(F("MPU6050 status: ")); //Moves constant string to program memory instead of RAM
  Serial.println(status);
  while(status!=0){ } // stop everything if could not connect to MPU6050
  
  Serial.println(F("Calculating offsets, do not move MPU6050"));
  delay(1000);
  mpu.calcOffsets(); // gyro and accelero
  Serial.println("Done!\n");
}

void loop() {
  mpu.update();

  x = mpu.getAngleX();
  y = mpu.getAngleY();
  z = mpu.getAngleZ();

  Serial.print("X : ");
  Serial.print(x);
  Serial.print("\tY : ");
  Serial.print(y);
  Serial.print("\tZ : ");
  Serial.println(z);
  delay(10);    // print data every 10ms
  
/*......................................  Fall Alert System  ...........................................
........................................   To be Continued   ...........................................*/
}
 
