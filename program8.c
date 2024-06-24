// Accept a number from user and check whether that number is even or odd

#include<stdio.h>
#include<stdbool.h>      //bool is not included in c diff header is used

// User is going to enter only positive inputs 

// Algorithm
/*
  START
       Accept one number as No
       Divide that number no by 2
       If remainder ia 0
       then display the result as even number 
       otherwise display the resuly as Odd number 
  STOP
*/

///////////////////////////////////////////////
//
// Function name : CheckEvenOdd
// Description :   Checking whether given number is even or odd
// Input :         positive interger
// Output :        boolean
// Name of author :Mayuri Shahuraj More
// Date :         16/04/2024
//
///////////////////////////////////////////////

bool CheckEvenOdd (unsigned int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {

        printf("%d is Odd number\n",iValue);
    }

    return 0;
}