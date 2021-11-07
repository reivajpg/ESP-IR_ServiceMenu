#include <IRremote.h>
IRsend irsend;
//0x20DFDF20 - "IN-START" preselected below
//0x20DF3FC0 - "RESET TO FACTORY"
//MEGA328 IR PINOUT INT1 PD3
//PIN 0 4 1 3 Use TV remote 2018-2020

void setup(){}

void loop() {
 for (int i = 0; i < 4; i++){
 irsend.sendNEC(0x20DFDF20, 32); //"IN-START" 2018-2020 models
 delay(5000);} //Command repeats every 5 seconds on first run untill arduino power disconnect
}