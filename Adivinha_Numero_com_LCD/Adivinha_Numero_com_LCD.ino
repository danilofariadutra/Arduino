#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
LiquidCrystal_PCF8574 lcd(0x27);

#define buzzer 10
#define btSim 6
#define btNao 7

char res = 'V';
float num, inicial = 0, ultimo = 1000;
bool btS = false, btN = false;

void setup() {
  Serial.begin(9600);
  lcd.begin (16, 2);
  pinMode(btSim, INPUT);
  pinMode(btNao, INPUT);
  pinMode(buzzer, OUTPUT);
}

void calculaMedia() {
  num = floor(inicial + ultimo) / 2;
}

void loop() {
  for (int c = 0; c < 10; c ++) {
    calculaMedia();
    lcd.setBacklight(HIGH); // Liga o Backlight
    lcd.setCursor(0, 0);
    lcd.print("O numero e maior");
    lcd.setCursor(0, 1);
    lcd.print("que ");
    lcd.print(num, 0);
    lcd.print("?");
    
    while (!btN && !btS) {
      btS = digitalRead(btSim);
      btN = digitalRead(btNao);
      
      if (digitalRead(btSim) == 1) {
        inicial = num;    
      }
      else if (digitalRead(btNao) == 1) {
        ultimo = num;
      }
    }
    delay(100);
    Serial.println(btS);
    Serial.println(btN);
    
  }

  lcd.setCursor(0, 0);
  lcd.print("O número é ");
  lcd.println(num, 0);
  for (int c = 0; c < 3; c ++) {
    lcd.setBacklight(HIGH);
    delay(1000);
    lcd.setBacklight(LOW);
    delay(1000);
  }
  delay(2000);
  lcd.clear();
  num = 0;
}
