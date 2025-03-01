#include<stdio.h>

int main()
{
    int iNo = 9758;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);      //8

    iNo=iNo/10;                  //43
    iDigit = iNo % 10;           //3
    printf("%d\n",iDigit);       //3            


    return 0;
}