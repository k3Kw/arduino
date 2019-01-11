#include <Stepper.h> // Include the header file

// change this to the number of steps on your motor
#define STEPS 32

// create an instance of the stepper class using the steps and pins
Stepper stepper(STEPS, 8, 10, 9, 11);

int val = 0;
int ldr=A0;
int valueldr;

void setup() {
  Serial.begin(9600);
  stepper.setSpeed(200);
  
}

void loop() {

 /* if (Serial.available()>0)
  {
    val = Serial.parseInt();
    stepper.step(val);
    Serial.println(val); //for debugging */
    valueldr=analogRead(ldr);
    Serial.println(valueldr);
    if (valueldr>500)
    {
      stepper.step(10);
    }
    else
    {
      stepper.step(-10);
    }
  }
 
