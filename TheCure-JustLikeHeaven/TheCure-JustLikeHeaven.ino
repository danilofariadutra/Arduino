/* Projeto: The Cure - Just Like Heaven;
 * Autor: Danilo Dutra;
 * Itens: Buzzer Ativo, Arduino UNO;
 */

#include <Notas.h>
#define buzzer 10

int semiBreve = 2000;
int minima = 1000;
int seminima = 500;
int colcheia = 250;
int semiColcheia = 125;
float fusa = 62.5;
float semiFusa = 31.25;

void setup() {

  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  introParte1();
  introParte1();
  introParte2();
  introParte1();
  soloPiano();
  introParte1();
}
void introParte1() {
  // PRIMEIRA PARTE DA INTRO
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_GS5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_GS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B4, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B4, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B4, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A4, seminima);
  delay(seminima);
  tone(buzzer, NOTE_A4, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B4, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B4, colcheia);
  delay(colcheia);
}

void introParte2() {
  // SEGUNDA PARTE DA INTRO
  tone(buzzer, NOTE_CS5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_CS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_GS5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_GS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_CS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
}

void soloPiano() {
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_CS6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_A5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_A6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_CS6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_FS6, semiBreve);
  delay(semiBreve);
  noTone(buzzer);
  delay(minima + colcheia);

  // SEGUNDA PARTE
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_CS6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_A5, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_A6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_CS6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_D6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_D6, seminima);
  delay(seminima);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia + minima);
  delay(colcheia + minima);
  noTone(buzzer);
  delay(colcheia);

  // TERCEIRA PARTE

  tone(buzzer, NOTE_A7, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A7, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A7, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A7, seminima);
  delay(seminima);
  tone(buzzer, NOTE_B7, seminima);
  delay(seminima);
  tone(buzzer, NOTE_CS7, seminima + colcheia);
  delay(seminima + colcheia);
  tone(buzzer, NOTE_A6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B7, seminima);
  delay(seminima);
  tone(buzzer, NOTE_A7, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B7, seminima);
  delay(seminima);
  tone(buzzer, NOTE_A7, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B7, seminima + semiBreve);
  delay(seminima + semiBreve);
  noTone(buzzer);
  delay(minima + colcheia);  
}

void loop() {  
}
