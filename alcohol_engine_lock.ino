// Alcohol Sensing and Engine Locking System
// Components: Arduino Uno, MQ-3 Sensor, Relay, LED, Buzzer, BO Motor
// Author: C Sai Preethika

int sensorPin = A0;     // MQ3 sensor
int relayPin = 7;       // Relay module (controls BO motor)
int ledPin = 12;        // LED indicator
int buzzerPin = 8;      // Buzzer alert

int sensorValue = 0;
int threshold = 400;    // Alcohol detection threshold

void setup()
{
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if(sensorValue > threshold)   // Alcohol detected
  {
    Serial.println("Alcohol Detected and Engine Locked");
    digitalWrite(relayPin, HIGH);   // Motor ON
    digitalWrite(ledPin, HIGH);     // LED ON
    digitalWrite(buzzerPin, HIGH);  // Buzzer ON
  }
  else
  {
    Serial.println("Alcohol Not Detected - Engine Running");
    digitalWrite(relayPin, LOW);    // Motor OFF
    digitalWrite(ledPin, LOW);      // LED OFF
    digitalWrite(buzzerPin, LOW);   // Buzzer OFF
  }
  
  delay(500);
}