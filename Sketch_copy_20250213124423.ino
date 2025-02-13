  #include "DHT.h"

#define RELAY_FAN_PIN A5 // Arduino pin connected to relay which connected to fan
#define DHTPIN 12           // Arduino pin connected to relay which connected to DHT sensor
#define DHTTYPE DHT11

const int TEMP_THRESHOLD_UPPER = 25; // upper threshold of temperature, change to your desire value
const int TEMP_THRESHOLD_LOWER = 20; // lower threshold of temperature, change to your desire value
int soil=A0;
int relay=2;
int buzzer =3;  
DHT dht(DHTPIN, DHTTYPE);

float temperature;    // temperature in Celsius
int sensorPin = A1; // select the input pin for LDR
const int ledPin = 13;
const int relay1 = 10;
int sensorValue = 0;
void setup()
{
  Serial.begin(9600); // initialize serial
  dht.begin();        // initialize the sensor
  pinMode(RELAY_FAN_PIN, OUTPUT); // initialize digital pin as an output
  pinMode(soil,INPUT);
  pinMode(ledPin, OUTPUT);
 pinMode(relay1,OUTPUT);
 pinMode(buzzer,OUTPUT);
  pinMode(relay,OUTPUT);
  digitalWrite(relay,HIGH);
}

void loop()
{


  int moistureLevel=analogRead(soil);
  Serial.println("moisturte hapa");
Serial.println(moistureLevel);
if(moistureLevel>980) //we can select the moisture level by selecting the different values and take which is suitable
{
digitalWrite(relay,LOW);
}
else
{
digitalWrite(relay,HIGH);
}
  // wait a few seconds between measurements.
  delay(2000);
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println("lighthapa");
Serial.println(sensorValue); //prints the values coming from the sensor on the screen
if (sensorValue <= 30) {

digitalWrite(ledPin, HIGH);
digitalWrite(relay1, HIGH);
Serial.print("Its Night Time, Turn on the LED : ");
delay(500);


} else  {

digitalWrite(ledPin, LOW);
digitalWrite(relay1, LOW);
Serial.print("Its daytime, Turn off the LED : ");
delay(500);

}

  temperature = dht.readTemperature();;  // read temperature in Celsius
  Serial.println(temperature);
  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    if(temperature > TEMP_THRESHOLD_UPPER){
      Serial.println("The fan is turned on");
      digitalWrite(buzzer, HIGH); 
      digitalWrite(RELAY_FAN_PIN, HIGH); // turn on
    } else if(temperature < TEMP_THRESHOLD_LOWER){
      Serial.println("The fan is turned off");
      digitalWrite(RELAY_FAN_PIN, LOW); // turn on
      digitalWrite(buzzer, LOW);
 }
}
}
