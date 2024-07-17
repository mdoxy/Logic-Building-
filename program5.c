//Accept 2 numbers from user and perform it's addition 

#include <stdio.h>

///////////////////////////////////////////////
//
// Function Name : Addition
// Description : It is used to perform add of 2 floats
// Input : Float, Float
// Output : Float
// Author : Mayuri Shahuraj More
// Date : 15/04/2024
//
//////////////////////////////////////////////////



//Step 2  : Write algorithm 
/*

START
   Accept First number from user and consider it as no1
   Accept second number from user and consider it as no2
   Create one variable to store the answer as Ans
   Perform the addition of no1 and no2
   Store the result into Ans
   Display the value of ans as a result
STOP

*/

float Addition(float fNo1, float fNo2)
{
  float fAns = 0.0;
  fAns = fNo1 + fNo2;
  return fAns;
}

////////////////////////////////////////////////////////
// Function Name : main
// Description: It's starting point
//////////////////////////////////////////////////////////

int main()
{
    //int i,j,k;
    float fValue1=0.0,fValue2=0.0;
    float fResult=0.0;

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1 , fValue2);

    printf("Adittion is: %f\n ",fResult);


    return 0;
}
