#include <Ultrasonic.h>
#include <Wire.h>

#define trig1 8
#define echo1 7
#define trig2 10
#define echo2 9
#define trig3 11
#define echo3 12
#define trig4 4
#define echo4 3
#define trig5 6
#define echo5 5
#define tamanho 30
#define tamanho2 7
#define tamanho3 7
#define tamanho4 15
#define tamanho5 15

Ultrasonic ultrasonicF(trig1, echo1);
Ultrasonic ultrasonicD(trig2, echo2);
Ultrasonic ultrasonicE(trig3, echo3);
Ultrasonic ultrasonicBD(trig4, echo4);
Ultrasonic ultrasonicBE(trig5, echo5);
int intr[20], flag;
float vetorMedia1[tamanho], vetorMedia2[tamanho2], vetorMedia3[tamanho3], vetorMedia4[tamanho4], vetorMedia5[tamanho5];
float media1, media2, media3, media4, media5;
int i1, i2, i3, i4, i5, c, ler;
long microsecF, microsecD, microsecE, microsecBE, microsecBD;
float cmValueF, cmValueD, cmValueE, cmValueBE, cmValueBD;
int ldr;

void setup() {

  Wire.begin(8);
  Wire.onReceive(ReceberUsuario);
  Wire.onRequest(EnviarUsuario);
  Serial.begin(9600);
  media1 = 0;
  media2 = 0;
  media3 = 0;
  media4 = 0;
  media5 = 0;
  memset(vetorMedia1, 0, sizeof(vetorMedia1));
  memset(vetorMedia2, 0, sizeof(vetorMedia2));
  memset(vetorMedia3, 0, sizeof(vetorMedia3));
  memset(vetorMedia4, 0, sizeof(vetorMedia4));
  memset(vetorMedia5, 0, sizeof(vetorMedia5));
  i1 = 0;
  i2 = 0;
  i3 = 0;
  i4 = 0;
  i5 = 0;
  flag = 0;
  ler = 0;

}

void ReceberUsuario(int byte_count)
{
  byte_count = 0;
  while (0 < Wire.available())
  {
    intr[byte_count] = Wire.read();
    byte_count++;
  }
  flag = 1;
}

void EnviarUsuario()
{
  if (intr[0] == 2) Wire.write(int(media1));
  if (intr[0] == 3) Wire.write(int(media2));
  if (intr[0] == 4) Wire.write(int(media3));
  if (intr[0] == 5) Wire.write(int(media4));
  if (intr[0] == 6) Wire.write(int(media5));

}

void loop() {


  if (flag == 1) {
    //Serial.println(intr[0]);
    flag = 0;
  }
  //Serial.println(media2);
  microsecF = ultrasonicF.timing();
  if (microsecF != 0)
  {
    cmValueF = ultrasonicF.convert(microsecF, Ultrasonic::CM);
    media1 = media1 - vetorMedia1[i1] + (cmValueF / tamanho);
    vetorMedia1[i1] = cmValueF / tamanho;
    i1++;
  }

  delayMicroseconds(1000);

  microsecD = ultrasonicD.timing();
  if (microsecD != 0)
  {
    cmValueD = ultrasonicD.convert(microsecD, Ultrasonic::CM);
    media2 = media2 - vetorMedia2[i2] + (cmValueD / tamanho2);
    vetorMedia2[i2] = cmValueD / tamanho2;
    i2++;

  }
  delayMicroseconds(1000);

  microsecBD = ultrasonicBD.timing();
  if (microsecBD != 0)
  {
    cmValueBD = ultrasonicBD.convert(microsecBD, Ultrasonic::CM);
    media4 = media4 - vetorMedia4[i4] + (cmValueBD / tamanho4);
    vetorMedia4[i4] = cmValueBD / tamanho4;
    i4++;
  }
  delayMicroseconds(1000);

  microsecBE = ultrasonicBE.timing();
  if (microsecBE != 0)
  {
    cmValueBE = ultrasonicBE.convert(microsecBE, Ultrasonic::CM);
    media5 = media5 - vetorMedia5[i5] + (cmValueBE / tamanho5);
    vetorMedia5[i5] = cmValueBE / tamanho5;
    i5++;
  }

    delayMicroseconds(1000);

  microsecE = ultrasonicE.timing();
  if (microsecE != 0)
  {
    cmValueE = ultrasonicE.convert(microsecE, Ultrasonic::CM);
    media3 = media3 - vetorMedia3[i3] + (cmValueE / tamanho3);
    vetorMedia3[i3] = cmValueE / tamanho3;
    i3++;
  }
  delayMicroseconds(1000);

  



  Serial.println(media5);

  if (i1 == tamanho)i1 = 0;
  if (i2 == tamanho2)i2 = 0;
  if (i3 == tamanho3)i3 = 0;
  if (i4 == tamanho4)i4 = 0;
  if (i5 == tamanho5)i5 = 0;
}
