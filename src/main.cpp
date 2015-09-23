#include "mbed.h"

DigitalOut myled(LED1);
DigitalIn myswitch(PI_11);
int main() {  
    while(1) {
    	if(myswitch) myled = 1;
    	else myled = 0;
        }
}
