// A    B    C    D    E
//alphabets are sequential,  
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch ='A';
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%c\t",ch);     //for char we use %c
        ch++;
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