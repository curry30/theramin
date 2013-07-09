void setup()
{
  pinMode(9,OUTPUT);
  Serial.begin(9600); //start serial communication with the Arduino
}




void loop()
{
  int lowestVal = 400;
  int HighestVal = 900;
  int lowFreq = 50;
  int highFreq = 100;
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  sensorValue=map(sensorValue, lowestVal, HighestVal, lowFreq,highFreq);
  tone(9,sensorValue,100);
  //tone(9, 440, 1000);
  delay(1); //to prevent bricking the Arduino  
}




