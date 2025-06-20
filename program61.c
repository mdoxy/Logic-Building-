//accept number from user and count digits reater than 5
#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0,iCount = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit > 5  )
        {
        iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter digits: ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("Number of digits greater than 5 are : %d\n",iRet);
    return 0;
}