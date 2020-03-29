/* Projeto: The Smiths - This Charming Man;
   Autor: Danilo Dutra;
   Itens: Buzzer Ativo, Arduino UNO;
*/

#include <Notas.h>
#define buzzer 10

float semiBreve = 2181.816;
float minima = 1090.908;
float seminima = 545.454;
float colcheia = 272.727;
float semiColcheia = 136.363;
float fusa = 68.181;
float semiFusa = 34.090;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void intro() {
  tone(buzzer, NOTE_CS6, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D6, colcheia + semiColcheia);
  delay(colcheia + semiColcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_CS6, semiColcheia);
  delay(semiColcheia);

  tone(buzzer, NOTE_CS6, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);

  tone(buzzer, NOTE_CS6, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_A6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);

  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_GS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
}

void versoParteUm() {
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_A6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B6, colcheia);
  delay(colcheia);

  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_GS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_B6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_GS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_GS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_B6, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_GS5, semiColcheia);
  delay(semiColcheia);
}

void fimIntro() {
  tone(buzzer, NOTE_GS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  noTone(buzzer);
  delay(semiColcheia);
  tone(buzzer, NOTE_CS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);

  tone(buzzer, NOTE_B5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_CS5, semiColcheia);
  delay(semiColcheia);
  noTone(buzzer);
  delay(semiColcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E6, colcheia);
  delay(colcheia);
  noTone(buzzer);
  delay(seminima + colcheia + semiColcheia);
}

void continuacaoSegundaParteVerso() {

  tone(buzzer, NOTE_C4, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_CS4, semiColcheia);
  delay(semiColcheia);

  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia + semiColcheia);
  delay(colcheia + semiColcheia);

  tone(buzzer, NOTE_CS4, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS4, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS4, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);

  // SEGUNDA PARTE
  tone(buzzer, NOTE_C4, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_CS4, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia + semiColcheia);
  delay(colcheia + semiColcheia);
  tone(buzzer, NOTE_GS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS4, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
}

void refrao() {

  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_GS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);

  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_B5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS6, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_GS5, colcheia);
  delay(colcheia);

  tone(buzzer, NOTE_D5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_A5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_CS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_GS5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);

  noTone(buzzer);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_E5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_E5, semiColcheia);
  delay(semiColcheia);
  noTone(buzzer);
  delay(semiColcheia);

  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  noTone(buzzer);
  delay(semiColcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  noTone(buzzer);
  delay(semiColcheia);
  tone(buzzer, NOTE_E5, colcheia);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
}

void finalRefrao() {

  noTone(buzzer);
  delay(colcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_FS5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_E5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_E5, semiColcheia);
  delay(semiColcheia);
  tone(buzzer, NOTE_FS5, colcheia);
  delay(colcheia);
  noTone(buzzer);
  delay(seminima + colcheia + semiColcheia);
}



void loop() {

  intro();
  versoParteUm();
  fimIntro();


  for (int c = 0; c < 4; c ++) {
    versoParteUm();
    continuacaoSegundaParteVerso();
  }
  versoParteUm();
  
  for (int c = 0; c < 2; c ++ ) {
    refrao();
  }
  finalRefrao();
  continuacaoSegundaParteVerso();

  for (int c = 0; c < 3; c ++) {
    versoParteUm();
    continuacaoSegundaParteVerso();
  }
  versoParteUm();

  for (int c = 0; c < 4; c ++) {
    refrao();
  }
  finalRefrao();
}
