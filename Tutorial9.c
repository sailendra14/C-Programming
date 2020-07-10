/*
Author: Sailendra Chettri
Purpose: Formate Specifires , Escapes Sequence
Date: 10/07/2020. 
*/




/*

//Format specifiers

// %c for character
// %l for long
// %lf for double
// %LF for long double
// %d for integers
// %f for floating

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 4;
    float b = 4.44;

    // printf("The value of a is %d and the value of b is %10.10f\n", a, b);
    printf("this %20.8f this\n", b); // 20.8 before place empty -20.8 after place empty
    // printf("Hello World");
    return 0;
}

*/

/*

#include <stdio.h>
#define PI 3.14
// Constants in C

int main()
{
    const float b = 9.90;
    // b = 9.80; // we cannot change the value of constant

    // printf("%f", b);
    printf("%f", PI);
    return 0;
}
*/

#include <stdio.h>
// Escape Sequencess

// \n for new-line
// \t for tab
// \a for producing sounds
// \ eascape eg. \\n, \\, \\a first \ escape 2nd and 3rd characters.
int main(int argc, char const *argv[])
{
    printf("t \t his \a thid");
    return 0;
}




