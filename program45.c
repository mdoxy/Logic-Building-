//code without flag 
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt = 0;

   if(iNo<0)                                     //updator - here we used minus-minus plus idea 
   {
    iNo=-iNo;
    
   }

  for (iCnt = 2; iCnt <= (iNo/2); iCnt++)                                         //we dont want to start the loop from 1
  {
    if((iNo%iCnt== 0))
    {
       break;
    }
  }
  if(iCnt>(iNo/2))
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