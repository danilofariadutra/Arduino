/* Projeto: Reprodutor de sons pré-programados, utilizando o teclado para emular as notas, copiando e colando os códigos no Monitor Serial;
 * Autor: Danilo Dutra;
 * Itens: Buzzer Ativo, Arduino Uno, fios e jumpers, protoboard;
 */

/* Função para apagar o LED, caso queira inserir os LEDs para piscar enquanto a nota soa
  void apaga() {
  delay(semiColcheia);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x00);
  digitalWrite(latch, HIGH);
  }
*/

/*
void pausa() {
  int pausa;
  if (millis() - pausa <= 500) {
    pausa = millis();
  }
  if (millis() - pausa >= 500) {
    pausa = 500;
  }
  Serial.println(pausa);
  return pausa;
};

// Para controle do tempo entre as notas, caso queira controlar manualmente;
void controlePotenciometro() {
  potenciometro = map(analogRead(pot), 0, 1023, 0, 800);
  Serial.println(potenciometro);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x80);
  digitalWrite(latch, HIGH);
  pausa();//delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x40);
  digitalWrite(latch, HIGH);
  delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x20);
  digitalWrite(latch, HIGH);
  delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x10);
  digitalWrite(latch, HIGH);
  delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x08);
  digitalWrite(latch, HIGH);
  delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x04);
  digitalWrite(latch, HIGH);
  delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x02);
  digitalWrite(latch, HIGH);
  delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x01);
  digitalWrite(latch, HIGH);
  delay(tempo);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0xFF);
  digitalWrite(latch, HIGH);
  delay(tempo * 2);
  digitalWrite(latch, LOW);
  shiftOut(data, clk, LSBFIRST, 0x00);
  digitalWrite(latch, HIGH);
  delay(tempo);
};
*/

#include "Notas.h"

#define latch 9
#define clk 8
#define data 7
#define buzzer 10
#define pot A5

char tecla;
int potenciometro, tempo = 500;
int semiBreve = 4000;
int minima = 2000;
int seminima = 1000;
int colcheia = 500;
int semiColcheia = 250;
int fusa = 125;
float semiFusa = 62.5;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(data, OUTPUT);  
  pinMode(pot, INPUT);
  Serial.begin(9600);
  shiftOut(data, clk, LSBFIRST, 0x00);
  digitalWrite(latch, HIGH);
  delay(100);
}
// Digite uma sequência para tocar alguma música

// Edvard Grieg - in the hall of the mountain king = ADFHKFK JDJ HSH ADFHKFKQ^KFK^
// Do Re Mi Fa = SFHJ JJ SFSF FF SLJH HH SFHJ JJ
// Johan Sebastian Bach = HKL KHG HK| DGH FS| ;,M ,;|;,MHB
// Beethoveen - Ode to Joy = MM,;;,MBCCBMMBB MM,;;,MBCCBMBCC BBMCBM,MCBM,MBCB;; MM,;;,MBCCBMBCC
// Beethoveen - Fur Elise = HGHGH|FS; ZB.;A ZB.AS ZHGHGH|FS; ZB.;A ZBSA; ;ASFH ;SJHF ;SHFS ;SFSAB B B B HGHGH|FS; ZB.;A ZBSA;
// Antonio Vivaldi - Four Seasons = B...MBA A;...MBA A;.;A;.M BA;.;ADA BA;.;ADA BDA ;.MBMA
// Donkey Kong Country Soundtrack = ZZ;   N,NC   CC/   ,;,B   BBS   ;/SF   N,;   BN,N
// Addams' Family = / V , V Z / N   / C N C / , V   / V , V Z / N   V C / Z C V
// Green Day = Basket Case Intro = / .,. /   CV CZ / /   CV CZ //// CZC
// Guns n' Roses - Sweet Child O' Mine = CF;,L;K;CF;,L;K;BF;,L;K;BF;,L;K;,F;,L;K;,F;,L;K;CF;,L;K;CF;
// Sum 41 - The Hell Song Intro = . |XV | B |XV | | |XV | M BBVVXX

/*
  Notas e base da melodia da Moonlight Sonata do Beethoven

  , Z V , Z V , Z V , Z  ,, | B
  L S G L S G L S G L S  LL


  GS2 CS1 E1
  GS2 CS1 E1
  GS2 CS1 E1
  GS2 CS1
  GS2GS2 B1  E1
  GS2 B1  E1
  GS2 B1  E1
  GS2 B1  E1
  A2 C2 E1
  A2 C2 E
  FS2 B1 DS1
  B2 B1 DS1

  E2 GS1 B1
  E2 GS1 B1
  E2 GS1 B1
  E2 GS1 B1

  E2 G1 B1
  E2 G1 B1
  E2 G1 B1
  E2 G1 B1
*/

void loop() {

  if (Serial.available()) {
    tecla = Serial.read();
    Serial.println(tecla);

    if (tecla == ' ') {
      noTone(buzzer);
      delay(semiColcheia);
    }

    if (tecla == '|') {
      tone(buzzer, NOTE_B4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x80);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'Z') {
      tone(buzzer, NOTE_C4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x40);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'X') {
      tone(buzzer, NOTE_CS4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0xC0);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'C') {
      tone(buzzer, NOTE_D4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x20);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'V') {
      tone(buzzer, NOTE_DS4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0xA0);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'B') {
      tone(buzzer, NOTE_E4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x10);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'N') {
      tone(buzzer, NOTE_F4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x08);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'M') {
      tone(buzzer, NOTE_FS4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x88);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == ',') {
      tone(buzzer, NOTE_G4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x04);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == '.') {
      tone(buzzer, NOTE_GS4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x84);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == ';') {
      tone(buzzer, NOTE_A4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x02);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == '/') {
      tone(buzzer, NOTE_AS4, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x82);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'A') {
      tone(buzzer, NOTE_B5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x80);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }
    if (tecla == 'S') {
      tone(buzzer, NOTE_C5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x40);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'D') {
      tone(buzzer, NOTE_CS5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0xC0);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'F') {
      tone(buzzer, NOTE_D5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x20);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'G') {
      tone(buzzer, NOTE_DS5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0xA0);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'H') {
      tone(buzzer, NOTE_E5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x10);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'J') {
      tone(buzzer, NOTE_F5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x08);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'K') {
      tone(buzzer, NOTE_FS5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x88);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'L') {
      tone(buzzer, NOTE_G5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x04);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == '~') {
      tone(buzzer, NOTE_GS5, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x84);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == '^') {
      tone(buzzer, NOTE_A6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x02);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == ']') {
      tone(buzzer, NOTE_AS6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x82);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'Q') {
      tone(buzzer, NOTE_B6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x80);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'W') {
      tone(buzzer, NOTE_C6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x40);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
    }

    if (tecla == 'E') {
      tone(buzzer, NOTE_CS6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0xC0);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
    }

    if (tecla == 'R') {
      tone(buzzer, NOTE_D6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x20);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }
    if (tecla == 'T') {
      tone(buzzer, NOTE_DS6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0xA0);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'Y') {
      tone(buzzer, NOTE_E6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x10);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'U') {
      tone(buzzer, NOTE_F6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x08);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'I') {
      tone(buzzer, NOTE_FS6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x88);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'O') {
      tone(buzzer, NOTE_G6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x04);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == 'P') {
      tone(buzzer, NOTE_GS6, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x04);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }

    if (tecla == '[') {
      tone(buzzer, NOTE_A7, semiColcheia);
      shiftOut(data, clk, LSBFIRST, 0x02);
      digitalWrite(latch, HIGH);
      digitalWrite(latch, LOW);
      delay(semiColcheia);
    }
  }
  shiftOut(data, clk, LSBFIRST, 0x00);
  digitalWrite(latch, HIGH);
  digitalWrite(latch, LOW);
}
