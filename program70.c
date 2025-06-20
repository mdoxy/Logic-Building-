// Input : 5
// Output : 1 * 2 * 3 * 4 * 5 *
//identify the common pattern eg.1 * one and star in which 1 is dynamic and star is dynamic
//we can write counter and static part in same print statement where counter will add everytime but * will remain static 


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
       // printf("%d\t",iCnt);   another way 
       // printf("*\t");
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
