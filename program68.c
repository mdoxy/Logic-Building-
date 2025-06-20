#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("\t*");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of times want to print *: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}