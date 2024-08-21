//take input display factors of that number 
#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
     int iValue = 0;

     printf("Enter number : \n");
     scanf("%d",&iValue);

     Display(iValue);

     return 0;

}