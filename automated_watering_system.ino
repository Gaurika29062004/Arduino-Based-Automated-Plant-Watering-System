#include <Wire.h>
#include <LiquidCrystal_I2C.h> // for a 16x2 LCD

LiquidCrystal_I2C lcd(0x27, 16, 2); // Address 0x27
const int soilMoisturePin = A0;
const int pumpControlPin = 7;
const int buzzerPin = 8; // Buzzer connected to pin 8

void setup() {
  Serial.begin(9600);
  pinMode(pumpControlPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as output

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Plant Watering");
}

void loop() {
  int moistureLevel = analogRead(soilMoisturePin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);

  lcd.setCursor(0, 1);
  lcd.print("Moisture: ");
  lcd.print(moistureLevel);
  lcd.print("       "); // Clear previous status

  if (moistureLevel > 920) {
    // Soil is dry, turn on the pump and buzz
    lcd.setCursor(0, 1);
    lcd.print("Watering      ");
    digitalWrite(pumpControlPin, LOW); // Turn on the pump
    digitalWrite(buzzerPin, HIGH);     // Turn on the buzzer
  } else if (moistureLevel >= 450 && moistureLevel <= 920) {
    lcd.setCursor(0, 1);
    lcd.print("Soil is Humid ");
    digitalWrite(pumpControlPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Moisture OK   ");
    digitalWrite(pumpControlPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000); // Delay between readings
}
