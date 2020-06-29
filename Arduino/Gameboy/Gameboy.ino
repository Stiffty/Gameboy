#include <Keyboard.h>
int val = 0;  // variable to store the value read

int PinA = 7;
int PinB = 8;
int PinUP = 10;
int PinDOWN = 12;
int PinRIGTH = 11;
int PinLEFT = 9;
int PinSTART = 4;
int PinSELECT = 5;
int PinSHOULDER_L = 6;
int PinSHOULDER_R = 2;

int PinAP = false;
int PinBP = false;
int PinUPP = false;
int PinDOWNP = false;
int PinRIGTHP = false;
int PinLEFTP = false;
int PinSTARTP = false;
int PinSELECTP = false;
int PinSHOULDER_LP = false;
int PinSHOULDER_RP = false;

void setup() {
  Serial.begin(9600);     
  pinMode(PinA, INPUT);
  pinMode(PinB, INPUT);
  pinMode(PinUP, INPUT);
  pinMode(PinDOWN, INPUT);
  pinMode(PinRIGTH, INPUT);
  pinMode(PinLEFT, INPUT);
  pinMode(PinSTART, INPUT);
  pinMode(PinSELECT, INPUT);
  pinMode(PinSHOULDER_L, INPUT);
  pinMode(PinSHOULDER_R, INPUT);
}

void loop() {
  val = digitalRead(PinA);
  if(val == 0 && PinAP == false){
     Serial.write("a");
     PinAP = true;
      delay(100);
  }else if(val > 0&& PinAP == true){
  Serial.write("ar");
       PinAP = false;
  delay(10);
  }

  val = digitalRead(PinB);
  if(val == 0&& PinBP == false){
     Serial.write("b");
     PinBP = true;
      delay(100);
  }else if(val > 0&& PinBP == true){
   Serial.write("br");
       PinBP = false;
        delay(100);
         delay(100);
  }

  val = digitalRead(PinUP);
  if(val == 0&& PinUPP == false){
     Serial.write("u");
     PinUPP = true;
      delay(100);
  }else if(val > 0&& PinUPP == true){
  Serial.write("ur");
       PinUPP = false;
        delay(100);
  }

  val = digitalRead(PinDOWN);
  if(val == 0&& PinDOWNP == false){
     Serial.write("d");
     PinDOWNP = true;
      delay(100);
  }   else if(val > 0&& PinDOWNP == true){
  Serial.write("dr");
       PinDOWNP = false;
        delay(100);
  }

  val = digitalRead(PinLEFT);
  if(val == 0&& PinLEFTP == false){
     Serial.write("l");
     PinLEFTP = true;
      delay(100);
  }  else if(val > 0&& PinLEFTP == true){
  Serial.write("lr");
       PinLEFTP = false;
        delay(100);
  }

   val = digitalRead(PinRIGTH);
  if(val == 0&& PinRIGTHP == false){
     Serial.write("r");
     PinRIGTHP = true;
      delay(100);
  }   else if(val > 0&& PinRIGTHP == true){
  Serial.write("rr");
       PinRIGTHP = false;
        delay(100);
  }

  val = digitalRead(PinSTART);
  if(val == 0&& PinSTARTP == false){
     Serial.write("s");
     PinSTARTP = true;
      delay(100);
  } else if(val > 0&& PinSTARTP == true){
   Serial.write("sr");
       PinSTARTP = false;
        delay(100);
  }

  val = digitalRead(PinSELECT);
  if(val == 0&& PinSELECTP == false){
     Serial.write("c");
     PinSELECTP = true;
      delay(100);
  } else if(val > 0&& PinSELECTP == true){
  Serial.write("cr");
       PinSELECTP = false;
        delay(100);
  }
  val = digitalRead(PinSHOULDER_L);
  if(val == 0&& PinSHOULDER_LP == false){
     Serial.write("q");
     PinSHOULDER_LP = true;
      delay(100);
  }   else if(val > 0&& PinSHOULDER_LP == true){
  Serial.write("qr");
       PinSHOULDER_LP = false;
        delay(100);
  }
  val = digitalRead(PinSHOULDER_R);
  if(val == 0&& PinSHOULDER_RP == false){
     Serial.write("e");
     PinSHOULDER_RP = true;
      delay(100);
  }  else if(val > 0&& PinSHOULDER_RP == true){
  Serial.write("er");
       PinSHOULDER_RP = false;
        delay(100);
  }
}
