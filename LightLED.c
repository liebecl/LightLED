include <stdio.h>
include <wiringPi.h>

#define PIN_0 0
#define DL_500MS 500

int main()
{
  /*初始化硬件*/
  wiringPiSetup();
  /*设置pin 0为输出模式*/
  pinMode(PIN_0,OUTPUT);
  
  while(1)
  {
    /*拉高pin 0口*/
    digitalWrite(PIN_0,HIGH);
    /*延时500ms*/
    delay(DL_500MS);
    digitalWrite(PIN_0,LOW);
    delay(DL_500MS);    
  }
}
