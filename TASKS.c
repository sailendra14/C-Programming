// /*
// Author: Sailendra
// Purpose: Analyzing IF ELSE statements
// Date: 10th july 2020.

// */

// #include <stdio.h>

// int main()
// {
//     int num, sub;

//     printf("Enter the subjects you clear: \n");
//     scanf("%d", &sub);
    
//     if (num = 2)
//     { 
//         printf("You got Rs. 45!\n");
//     }

//     else if(num = 1)
//     {
//         printf("You got 15!\n");
//     }

//     else if (num > 2 || num < 0)
//     {
//         printf("Invalid subjects\n");
//     }
    
    
    
    
//     return 0;
// }


// SOLUTION FROM YOUTUBE
 
#include<stdio.h>
 int main()
 {   
  int subject;  
   printf("Choose the no.1 if you pass the both subjects also get the 45Rs\n");    
 printf("Choose the no.2 if you pass the maths subjects also get the 15Rs\n");     
printf("Choose the no.3 if you pass the science subjects also get the 15Rs\n");     
scanf("%d",&subject);     if(subject==1)    
 {      
   printf(" YOu are pass in both subject. so, you get the 45Rs\n");    
 }    
 else if(subject==2)      {         
 printf("You are pass the maths subject .so,you get the 15Rs\n");   
   }    
  else if(subject==3)     
 {       
   printf("You are pass the science subject .so,you get the 15Rs\n");     
 }     
 else     
  {         
   printf("You are fail .so better luck         on next time\n");   
   }      
return 0; 
 } 