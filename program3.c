//Accept 2 numbers from user and perform it's addition 

#include <stdio.h>

int main()
{
    //int i,j,k;
    int iValue1=0,jValue2=0;     //i is prefix for integer 
    int iResult=0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&jValue2);

    iResult = iValue1 + jValue2;

    printf("Adittion is: %d\n ",iResult);


    return 0;
}

/* In last program we randomly chose the variables without any meaning, but a variable/variable name should be 
   meaningfull and understandable to everyone. Here we took prefix i to indicate variable is integer and value 
   iValue and similarly result to showcase result as iResult.
    Initializing variables to 0 prevents garbage values.
*/
