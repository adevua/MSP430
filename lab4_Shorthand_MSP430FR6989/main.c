#include <msp430.h> 

/*
 * main.c
 */



int main(void) {

    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    int a, b, y, z;
	
	a = 0;
	b = 0;
	y = 0;
	z = 0;

	while(1) {

	    //a++;
	                            // Post increment
	                            // y = a
	                            // a = a + 1
	    y = a++;

	    //++b;
	                            // Pre increment
	                            // b = b + 1
	                            // z = b
	    z = ++b;

	}

}
