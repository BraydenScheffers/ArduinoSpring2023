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
int sound  = 100;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin,  OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDlampRed, OUTPUT);
  pinMode(LEDlampBlue,  OUTPUT);
  pinMode(LEDlampGreen, OUTPUT);
  pinMode(soundbuzzer, OUTPUT);
}
void  loop() {
  long durationindigit, distanceinft;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  durationindigit = pulseIn(echoPin, HIGH);
  distanceinft = (durationindigit/5) / 29.1;

 if (distanceinft > 10) {
  Serial.println("We have not detected any cars in your Blind Spots - Change lanes when needed."); 
 }

 if (distanceinft <= 10 && distanceinft >= 7) { 
  digitalWrite(LEDlampRed, HIGH); 
  Serial.println("There is another car within"); 
  Serial.print(distanceinft); 
  Serial.println(" feet from your Blind Spot. \nGetting Close, Change Lanes with Caution"); 
 }
 else { 
  digitalWrite(LEDlampRed, LOW); 
 }


  delay(1000);
}
