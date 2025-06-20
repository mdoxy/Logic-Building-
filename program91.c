#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch ='\0';

    for(iCnt = 1,ch = 'A'; iCnt<=iNo; iCnt++,ch++)
    {
        printf("%c\t%d\t",ch,iCnt);     //for char we use %c
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}