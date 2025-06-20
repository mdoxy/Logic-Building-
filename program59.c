#include<stdio.h>

int OddDisplay(int iNo)
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
        if(iDigit % 2 !=0 )
        {
          printf("%d\n",iDigit);
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;

    printf("Enter digits: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}