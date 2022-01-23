#include "DHT.h"
#include "LiquidCrystal.h"

#define DHTPIN 8 // номер пина, к которому подсоединен датчик
const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2; // ЖК
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Раскомментируйте в соответствии с используемым датчиком

// Инициируем датчик

DHT dht(DHTPIN, DHT11);

void setup() {

  lcd.begin(16, 2);
  lcd.print("Hi...");
  
  Serial.begin(9600);

  dht.begin();

}

void loop() {
    
  // Задержка 2 секунды между измерениями
  delay(2000);

  //Считываем влажность
  float h = dht.readHumidity();

  // Считываем температуру
  float t = dht.readTemperature();

  // Проверка удачно прошло ли считывание.
  if (isnan(h) || isnan(t)) {
    Serial.println("Не удается считать показания");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h, DEC);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t, DEC);
  Serial.println(" *C");

  lcd.setCursor(0, 0);  
  lcd.print(String("Hum:  ") + String(h) + String(" %"));
  lcd.setCursor(0, 1);  
  lcd.print(String("Temp: ") + String(t) + " *C");

}
