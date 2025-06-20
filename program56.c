#include<stdio.h>

int CountDigits(int iNo)
{
    int iCount = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        // removed iDigit since what number is it doesn't matter only count does 
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter digits: ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);
    return 0;
}