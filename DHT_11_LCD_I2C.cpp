#include <DHT.h>
#include <LiquidCrystal_I2C_STEM.h>
#define DHTPIN 2
#define DHTTYPE 11
DHT dht(DHTPIN,DHTTYPE);
LiquidCrystal_I2C_STEM lcd(0x27 , 16 ,2);
void setup()
{
    Serial.being(9600);
    DHT.begin();
    lcd.init();
    lcd.backlight();
}
void loop()
{
    int t= dht.readTemperature;
    int h=dht.readHumidity;
    delay(1000);
    lcd.setCursor(0,0);
    lcd.print("Temperature ");
    lcd.print(t);
    lcd.setCursor(0,1);
    lcd.print("Hunidity");
    lcd.print(h);
}