#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}

int main()
{
     int iValue, iRet = 0;

     printf("Enter number : \n");
     scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    prinf("Summation of factors %d",iRet);

     return 0;

}