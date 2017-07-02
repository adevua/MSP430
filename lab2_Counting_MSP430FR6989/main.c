#include <msp430.h>             // Used to make code easier to read
#define DEVELOPMENT 0x5A80      // Used to disable watchdog timer for development

main()
{
    WDTCTL = DEVELOPMENT;       // Disable watchdog timer for development
    long count = 0;             // Create variable named count and set equal to 0
    while(count<20)             // Keep going until count is 20
    {
        count = count + 1;      // Add 1 to variable count
    }
    while(1);                   // After counting, stay here forever
}
