/*
Author: Sailendra
Purpose: Analyzing switch and nested switch statements
Date: 10th july 2020.

*/

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age: \t");
    scanf("%d", &age);

     printf("Enter your marks: \t");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;
        
        default:
            printf("Invalid marks\n");
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("Age is not 3, 13, 23\n");
    }

    return 0;
}
