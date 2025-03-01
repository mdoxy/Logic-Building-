//we used break here beacuse suppose 200 is given and we know that it isnt prime but its still going 1000 times through loop to stop the loop we used break after 1 factor we break it
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt = 0, iCount = 0;

   if(iNo<0)                                     //updator - here we used minus-minus plus idea 
   {
    iNo=-iNo;
    
   }

  for (iCnt = 2; iCnt <= (iNo/2); iCnt++)                                         //we dont want to start the loop from 1
  {
    if((iNo%iCnt== 0))
    {
        iCount++;
        break;
    }

    if(iCount == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
  }


}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter nummber : \n");
   scanf("%d",&iValue);

   bRet = CheckPrime(iValue);
   if(bRet == true)
   {
    printf("%d is prime number \n",iValue);
   }
   else
   {
    printf("%d is not a prime number \n",iValue);
   }
   return 0;


}