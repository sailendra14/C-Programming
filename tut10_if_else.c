/*
Author: Sailendra
Purpose: Analyzing IF ELSE statements
Date: 10th july 2020.

*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You have enter %d as your age.\n", age);

    if (age >= 18)
    {
        printf("You can vote!\n"); 
    }

    else if (age >= 10)  
    {
        printf("You are between 10 to 18 you can vote for kids!\n");
    }

    else if (age <= 10)  
    {
        printf("You are not even tennager!\n");
    }
    
    else
    {
        printf("You cannot vote!\n");
    }
    
    return 0;
}