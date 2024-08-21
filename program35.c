#include<stdio.h>

//Time complexity : O(N)

int DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d are: \n",iNo);
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
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