#include <IRremote.h>   // 引用 IRRemote 函式库
// 头文件已经定义PIN 3为信号输出。。
// 所以只能连接PIN 3 ，若更改请在头文件更改

//Mega2560对应的是引脚9
IRsend irsend;        // 定义 IRsend 物件来发射红外线讯号
void setup() 
{ 
   //
  } 
void loop() 
{ 
   irsend.sendNEC(0xC728D, 32);     //关——编码
   delay(2000); 
}
