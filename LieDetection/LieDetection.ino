/// Programmer: Brayden Scheffers
/// Date: 5.4.2023
/// Program: LieDetection 

/// Green, Red, Blue (2,3,4) 

int LEDGreen = 12; 
int LEDRed = 11; 
int LEDBlue = 10; 
int soundbuzzer = 3; 
int sound = 500; 

void setup()
{
  Serial.begin(9600);
  pinMode(LEDGreen, OUTPUT);
  pinMode(LEDRed,  OUTPUT);
  pinMode(LEDBlue, OUTPUT);
  digitalWrite(LEDGreen, HIGH);
  delay(500);
  digitalWrite(LEDRed,  HIGH);
  delay(500);
  digitalWrite(LEDBlue, HIGH);
  delay(500);
}

void  loop()
{
  if (analogRead(A0) > 80)
  {
    digitalWrite(LEDBlue, HIGH);
  }
  else
  {
    digitalWrite(LEDBlue,  LOW);
  }
  if (analogRead(A0) > 30)
  {
    digitalWrite(LEDGreen, HIGH);
  }
  else
  {
    digitalWrite(LEDGreen,  LOW);
  }
  if (analogRead(A0) > 50) 
  {
    digitalWrite(LEDRed, HIGH);
  }
  else
  {
    digitalWrite(LEDRed,  LOW);
  }

  Serial.println(analogRead(A0));
  delay(20);


  if (analogRead(A0) > 50){ 
    noTone(soundbuzzer);
  }
  else {
    tone(soundbuzzer, sound); 
  }
}
