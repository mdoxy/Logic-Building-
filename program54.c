//with updater
#include<stdio.h>

void DisplayDigits(int iNo)
{                                                                                                                                                                                                                                                                       
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)                            //while(iNo!=0)for negative inputs to run 
    {
        iDigit = iNo % 10;                        //remainder is used for printing last digits one by one 
        printf("%d\n",iDigit);
        iNo = iNo / 10;                              //increment the number we divide it by 10'
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}