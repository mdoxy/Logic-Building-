#include<stdio.h>
void Addition(int ptr[], int iSize)
{
    int i = 0;
    int iSum = 0;
    for (i = 0; i<iSize ; i++)
    {
        iSum = iSum + ptr[i];
    }
    return iSum;
}

int main()
{
    int iRet = 0;

    int Arr[5] = {10,20,30,40,50};
    
    iRet = Addition(Arr,5);
    printf("Addition is : %d\n",iRet);
    
    return 0;
}