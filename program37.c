#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
           iCount++;
        }
        
    }
    return iCount;
}

int main()
{
     int iValue = 0, iRet=0;

     printf("Enter number : \n");
     scanf("%d",&iValue);

     iRet=CountFactors(iValue);
     printf("number of Factors are: %d",iRet);

     return 0;

}