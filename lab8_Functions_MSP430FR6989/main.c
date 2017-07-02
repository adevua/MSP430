//***********************************************************************
//*** Function Prototype ************************************************
//***********************************************************************
signed int max_of (signed int, signed int);
//***********************************************************************

main()
{
    signed int a, b, first, second, output;
    a = 5;
    b = -2;
    first = -4;
    second = 13219;
    output = max_of(first,second);
    while(1);
}
//***********************************************************************
//*** Function Definition ***********************************************
//***********************************************************************

signed int max_of(signed int a, signed int b)
{
    if (a > b) // If a>b,
    {
        return a; // then return a, and immediately
    } // leave the max_of function
    return b; // You only get here if a>b if false,
} // so return b and leave max_of function
//***********************************************************************
