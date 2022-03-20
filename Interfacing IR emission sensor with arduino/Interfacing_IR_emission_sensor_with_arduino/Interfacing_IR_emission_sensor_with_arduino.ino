#include <IRremote.h>
IRsend irsend;
void setup()
{
    Serial.begin(9600); // Initialize serial interface
}
void loop() 
{
    for (int i = 0; i < 10; i++) { 
       irsend.sendSony(0xa90, 12); // code for Sony TV power command
       delay(5000); // wait 5 seconds
   }
}
