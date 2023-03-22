//Programmer: Brayden Scheffers
//Date: 22/3/2023
//Program: ReadAnalogVoltage

/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ReadAnalogVoltage
*/

// the setup routine runs once when you press reset:


int trigPin = 7; 
int echoPin = 6; 
int LEDlampGreen = 9; 
int LEDlampBlue = 10; 
int LEDlampRed = 11;  
int soundbuzzer = 3; 
int sound  = 500;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin,  OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDlampGreen, OUTPUT);
  pinMode(LEDlampBlue,  OUTPUT);
  pinMode(LEDlampRed, OUTPUT);
  pinMode(soundbuzzer, OUTPUT);
}
void  loop() {
  long durationindigit, distanceincm;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  durationindigit = pulseIn(echoPin, HIGH);
  distanceincm = (durationindigit/5) / 29.1;
 
  if (distanceincm < 50) {
      digitalWrite(LEDlampGreen, HIGH);
}
  else {
      digitalWrite(LEDlampGreen,  LOW);
  }
  
  if (distance < 20) {
    digitalWrite(LEDlampBlue,  HIGH);
}
  else {
    digitalWrite(LEDlampBlue,LOW);
  }
  if (distance  < 5) {
    digitalWrite(LEDlampRed, HIGH);
    sound = 1000;
}
  else  {
    digitalWrite(LEDlampRed,LOW);
  }
 
  if (distanceincm > 5 ||  distanceinsm <= 0){
    Serial.println("Outside the permissible range of distances");
    noTone(soundbuzzer);
  }
  else {
    Serial.print(distance);
    Serial.println("  cm");
    tone(buzzer, sound);
  }
  
  delay(300);
}
