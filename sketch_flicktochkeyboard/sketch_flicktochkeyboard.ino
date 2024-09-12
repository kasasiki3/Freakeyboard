char t1 = 1;
char t2 = 0;
char t3 = 2;
char t4 = 3;
char t5 = 4;
char t6 = 5;
char t7 = 6;
char t8 = 7;
char t9 = 8;
char t10 = 9;
char t11 = 21;
char t12 = 20;
char t13 = 19;
char t14 = 18;
char t15 = 15;
char t16 = 14;
char t17 = 16;
char t18 = 10;
char ax = 50;//きほんきーば基本キーを決めたあとのディレイ

//基本キーの状態保存
bool nakaA = false; 
//全く入力がない
bool allfalse = true;
bool allfalse1 = true;
int KHkey = 0;
int OKkey = 0;
void setup() {
pinMode(t1, INPUT_PULLUP);
pinMode(t2, INPUT_PULLUP);
pinMode(t3, INPUT_PULLUP);
pinMode(t4, INPUT_PULLUP);
pinMode(t5, INPUT_PULLUP);
pinMode(t6, INPUT_PULLUP);
pinMode(t7, INPUT_PULLUP);
pinMode(t8, INPUT_PULLUP);
pinMode(t9, INPUT_PULLUP);
pinMode(t10, INPUT_PULLUP);
pinMode(t11, INPUT_PULLUP);
pinMode(t12, INPUT_PULLUP);
pinMode(t13, INPUT_PULLUP);
pinMode(t14, INPUT_PULLUP);
pinMode(t15, INPUT_PULLUP);
pinMode(t16, INPUT_PULLUP);
pinMode(t17, INPUT_PULLUP);
pinMode(t18, INPUT_PULLUP);


}

void loop() {
int a1 = digitalRead(t1);
int a2 = digitalRead(t2);
int a3 = digitalRead(t3);
int a4 = digitalRead(t4);
int a5 = digitalRead(t5);
int a6 = digitalRead(t6);
int a7 = digitalRead(t7);
int a8 = digitalRead(t8);
int a9 = digitalRead(t9);
int a10 = digitalRead(t10);
int a11 = digitalRead(t11);
int a12 = digitalRead(t12);
int a13 = digitalRead(t13);
int a14 = digitalRead(t14);
int a15 = digitalRead(t15);
int a16 = digitalRead(t16);
int a17 = digitalRead(t17);
int a18 = digitalRead(t18);


 // int a13 = digitalRead(sita);

 if(a1 == LOW && a2 == LOW && a3 == LOW && a4 == LOW && a5 == LOW && a6 == LOW && a7 == LOW && a8 == LOW && a9 == LOW && a10 == LOW && a11 == LOW && a12 == LOW && a13 == LOW && a14 == LOW && a15 == LOW && a16 == LOW && a17 == LOW && a18 == LOW){
  allfalse = false;//すべてのキーが触れていない状態

  } else{

    allfalse = true;

    
  }
   

if(allfalse1 == false && allfalse == true){//基本キーの設定
//Serial.println("aaaaaa");

if (a1 == HIGH) {
  KHkey = 1;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a2 == HIGH) {
  KHkey = 2;
  // Serial.println("基本キー");
  // Serial.println("aaa");
    delay(ax);
}
if (a3 == HIGH) {
  KHkey = 3;
  // Serial.println("基本キー");
  // Serial.println("aaa");
    delay(ax);
}
if (a4 == HIGH) {
  KHkey = 4;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a5 == HIGH) {
  KHkey = 5;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a6 == HIGH) {
  KHkey = 6;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a7 == HIGH) {
  KHkey = 7;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a8 == HIGH) {
  KHkey = 8;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a9 == HIGH) {
  KHkey = 9;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a10 == HIGH) {
  KHkey = 10;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a11 == HIGH) {
  KHkey = 11;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a12 == HIGH) {
  KHkey = 12;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a13 == HIGH) {
  KHkey = 13;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a14 == HIGH) {
  KHkey = 14;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a15 == HIGH) {
  KHkey = 15;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a16 == HIGH) {
  KHkey = 16;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a17 == HIGH) {
  KHkey = 17;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}
if (a18 == HIGH) {
  KHkey = 18;
  // Serial.println("基本キー");
  // Serial.println("aaa");
  delay(ax);
}

}

 
if (a1 == HIGH) {
  OKkey = 1;
}
if (a2 == HIGH) {
  OKkey = 2;
}
if (a3 == HIGH) {
  OKkey = 3;
}
if (a4 == HIGH) {
  OKkey = 4;
}
if (a5 == HIGH) {
  OKkey = 5;
}
if (a6 == HIGH) {
  OKkey = 6;
}
if (a7 == HIGH) {
  OKkey = 7;
}
if (a8 == HIGH) {
  OKkey = 8;
}
if (a9 == HIGH) {
  OKkey = 9;
}
if (a10 == HIGH) {
  OKkey = 10;
}
if (a11 == HIGH) {
  OKkey = 11;
}
if (a12 == HIGH) {
  OKkey = 12;
}
if (a13 == HIGH) {
  OKkey = 13;
}
if (a14 == HIGH) {
  OKkey = 14;
}
if (a15 == HIGH) {
  OKkey = 15;
}
if (a16 == HIGH) {
  OKkey = 16;
}
if (a17 == HIGH) {
  OKkey = 17;
}
if (a18 == HIGH) {
  OKkey = 18;
}





//入力装置
if(allfalse1 == true && allfalse == false){
  
  int THEkey = KHkey*OKkey;
  if(KHkey == 8){
    if(THEkey == 24){
    Serial.println("ぬ");
  }
      if(THEkey == 56){
    Serial.println("ね");
  }
      if(THEkey == 104){
    Serial.println("の");
  }
      if(THEkey == 72){
    Serial.println("に");
  }
        if(THEkey == 64){
    Serial.println("な");
  }
  }
    if(KHkey == 7){
    if(THEkey == 14){
    Serial.println("つ");
  }
      if(THEkey == 56){
    Serial.println("て");
  }
      if(THEkey == 84){
    Serial.println("と");
  }
      if(THEkey == 42){
    Serial.println("ち");
  }
        if(THEkey == 49){
    Serial.println("た");
  }
  }
      if(KHkey == 9){
    if(THEkey == 36){
    Serial.println("ふ");
  }
      if(THEkey == 90){
    Serial.println("へ");
  }
      if(THEkey == 126){
    Serial.println("ほ");
  }
      if(THEkey == 72){
    Serial.println("ひ");
  }
        if(THEkey == 81){
    Serial.println("は");
  }
  }

}



 allfalse1 = allfalse; //前回のキー状態
 
}