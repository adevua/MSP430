#include <msp430.h> 

/*
 * main.c
 */
int main(void) {

    WDTCTL = WDTPW | WDTHOLD;	    // Stop watchdog timer
	
        char a = 0b10101101;        // Inputs from step 14
        char b = 0b11110000;
        char c = 0b01111111;
        char d = 0b10000000;
        char e = 0b10101101;
        char f = 0b00000000;
        char u, v, w, x, y, z;      // Answers will go here

                            //    Bit wise          Byte-wise
        u = a & b;          //    10101101          10101101
        v = a && b;         //  & 11110000       && 11110000
                            //  ----------       -----------
                            //  = 10100000        = 00000001

        w = c & d;          //    01111111          01111111
        x = c && d;         //  & 10000000       && 10000000
                            //  ----------       -----------
                            //  = 00000000        = 00000001

        y = e & f;          //    10101101          10101101
        z = e && f;         //  & 00000000       && 00000000
                            //  ----------       -----------
                            //    00000000          00000000

        while(1); // Stay here when done

}