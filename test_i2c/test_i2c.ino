#include <Wire.h>
#include "i2c.h"

#define MECANISME 0x20    //0 0 1 0 0 0 0 0  
#define AUXILIAIRE 0x21   //0 0 1 0 0 0 0 1
#define CLAVIER 0x22      //0 0 1 0 0 0 1 0

void setup() {
  // put your setup code here, to run once:

/* test buzzer */
initI2C(75);
Wire.begin(AUXILIAIRE);
Wire.write(0x02);
Wire.endTransmission(AUXILIAIRE);


}

void loop() {
  // put your main code here, to run repeatedly:

}
