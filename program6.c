//Accept 2 numbers from user and perform it's addition 

#include <stdio.h>


float Addition(  
                 float fNo1,       // First input
                 float fNo2        // Second input 
              )
{
  float fAns = 0.0;                // Variable to store result 
  fAns = fNo1 + fNo2;
  return fAns;
}


int main()
{
    
    float fValue1=0.0;              // Variable to stpre first input
    float fValue2=0.0;              // Variable to store second inputṁ
    float fResult=0.0;              // VAriable to store the result 


    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1 , fValue2);

    printf("Adittion is: %f\n ",fResult);


    return 0;
}