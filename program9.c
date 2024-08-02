// Accept a number from user and check whether that number is even or odd

#include<stdio.h>
#include<stdbool.h>      //bool is not included in c diff header is used

// User is going to enter only positive inputs 

// Algorithm
/*
  START
       Accept one number as No
       Divide that number no by 3 and 5
       If remainder is 0
       then display the result as divisible by 3 and 5
       otherwise display the result is not divisible 
STOP
*/

///////////////////////////////////////////////
//
// Function name : CheckDivisible
// Description :   Checking whether given number is even or odd
// Input :         Interger
// Output :        boolean
// Name of author :Mayuri Shahuraj More
// Date :         16/04/2024
//
///////////////////////////////////////////////

bool CheckDivisible (unsigned int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5\n",iValue);
    }
    else
    {

        printf("%d is not divisible by either 3 and 5\n",iValue);
    }

    return 0;
}

/*
  Logical && operator

  First     Second    &&      ||
  true      true      true    true
  false     false     false   false
  true      false     false   true
  false     true      false   true

*/