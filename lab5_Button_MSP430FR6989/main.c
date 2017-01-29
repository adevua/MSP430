
// Owner: Aleksey M.
// Compiler: Code Composer Studio 7.0
// CPU: MSP430FR6989 Launchpad

#include <msp430.h>

#define RED_LED     0x0001  // P1.0 is the Red LED
#define GREEN_LED   0x0080  // P9.7 is the Green LED
#define BUTTON1_1   (BIT1)  // P1.1 is the button1 0x0002
#define BUTTON1_2   (BIT2)  // P1.2 is the button2 0x0004
#define DEVELOPMENT 0x5A80  // Stop the Watchdog Timer
#define ENABLE_PINS 0x0001  // Required to use inputs and outputs

main()
{
    // Need for development mode
    WDTCTL = DEVELOPMENT;

    // Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;

    // Pins connected to red LED and green LED will be an output
    P1DIR = RED_LED;
    P9DIR = GREEN_LED;

    // Button needs a pull-up resistor. Set it! Info SLAU367L–October 2012–Revised October 2016 page 356
    P1OUT = BUTTON1_1 + BUTTON1_2;
    // Enable pull-up resistor
    P1REN = BUTTON1_1 + BUTTON1_2;


    while(1)
    {
        // Is P11 button pushed?
        if ((BUTTON1_1 & P1IN) == 0) {

            // Turn on the Red LED
            P1OUT = P1OUT | RED_LED;
        }
        else {

            // Turn off the Red LED
            P1OUT = P1OUT & ~(RED_LED);
        }


        if ((P1IN & BUTTON1_2) == 0) {
            P9OUT |= (GREEN_LED);
        }
        else {
            P9OUT &= ~(GREEN_LED);
        }


    }
}
