#include <LiquidCrystal.h>
#include <dht.h>
// LCD configuration
const int rs = 28, en = 29, d4 = 30, d5 = 31, d6 = 32, d7 = 33;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//Temperature Sensor congiguration.  
  dht DHT;
#define DHT11_PIN 34  
//For the current sensor
const int currentPin = A0;
int sensitivity = 66;
int adcValue= 0;
int offsetVoltage = 2500;
double adcVoltage = 0;
double currentValue = 0;
//For Voltage Sensor Configuration
int offset =20;
double voltage;
int chk;
void setup() {
  //LCD display Name of the project.
  lcd.begin(16, 4);
  lcd.setCursor(0, 0);
  lcd.print(" Smart Robot For");
  lcd.setCursor(0, 1);
  lcd.print("  Cleaning of ");
  lcd.setCursor(0, 2);
  lcd.print("  Solar Panel");
  delay(5000);
//All pin Modes
}

void loop() {

temp();
current();
volt();
lcd_display();
  
}  

void lcd_display(){
   lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");

  //Current Display
  lcd.setCursor(0,2);
  lcd.print("Current =     ");
  lcd.setCursor(10,2);
  lcd.print(currentValue,2);
  lcd.setCursor(14,2);
  lcd.print("A");

//voltage display.
  
  lcd.setCursor(0,3);
  lcd.print("Voltage= ");
  lcd.print(voltage);
  lcd.setCursor(14,3);
  lcd.print("V");

  }
  void temp(){
     chk = DHT.read11(DHT11_PIN);
     
delay(3000);
    }
    void current(){
        adcValue = analogRead(currentPin);
  adcVoltage = (adcValue / 1024.0) * 5000;
  currentValue = ((adcVoltage - offsetVoltage) / sensitivity);
}
void volt(){
  int volt = analogRead(A1);
  voltage = map(volt,0,1023, 0, 2500) + offset;
  voltage /=100;
  }
