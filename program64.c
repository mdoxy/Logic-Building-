#include<stdio.h>

int SumOddDigits(int iNo)
{
    int iDigit = 0,iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 !=0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter digits: ");
    scanf("%d",&iValue);

    iRet = SumOddDigits(iValue);

    printf("Addition of digits is: %d\n",iRet);
    return 0;
}