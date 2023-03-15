//Programmer: Brayden Scheffers
//Date: 14.3.2023
//Program: Fade


/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade

  https://arduinointro.com/projects/2-leds-alternate-fade-effect-using-the-for-loop
*/

int led10 = 10;  
int led11 = 11;

void setup() {
  pinMode(led10, OUTPUT);   
  pinMode(led11, OUTPUT);   
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    // sets the value (range from 0 to 255):
    analogWrite(led10, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    // sets the value (range from 0 to 255):
    analogWrite(led10, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    // sets the value (range from 0 to 255):
    analogWrite(led11, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    // sets the value (range from 0 to 255):
    analogWrite(led11, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  
}
