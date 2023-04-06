/// Programmer: Brayden Scheffers
/// Date: 5.4.2023
/// Program: LieDetection 

/// Green, Red, Blue (2,3,4) 

int LEDGreen = 5; 
int LEDRed = 4; 
int LEDBlue = 3; 

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
  if (analogRead(A0) > 100)
  {
    digitalWrite(LEDBlue, HIGH);
  }
  else
  {
    digitalWrite(LEDBlue,  LOW);
  }
  if (analogRead(A0) > 60)
  {
    digitalWrite(LEDGreen, HIGH);
  }
  else
  {
    digitalWrite(LEDGreen,  LOW);
  }
  if (analogRead(A0) > 80)
  {
    digitalWrite(LEDRed, HIGH);
  }
  else
  {
    digitalWrite(LEDRed,  LOW);
  }

  Serial.println(analogRead(A0));
  delay(20);
}
