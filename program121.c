//dynamic programming
#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;
    for (i = 0; i<iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    
    int iCount = 0, iRet = 0;
    int *Brr = NULL;

    //Step 1 :   Accept number of elements from user
    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    //Step 2 :   Allocate dynamic memory for that number of elements
    Brr = (int *)malloc(iCount * sizeof(int));

    printf("enter the elements : \n");
    for(int i = 0; i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    //Step 3 :   Accept the values from user and store into that memory
    printf("Entered elements are : \n");
    for(int i = 0; i<iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    //Step 4 :   Pass the address of that memory to the function (any)
    iRet = Addition(Brr,iCount);
    printf("Addition is :%d\n",iRet);

    //Step 5 :   after using that memory free it explicitely
    free(Brr);
    return 0;
}

/*
 
Step 1 :   Accept number of elements from user
Step 2 :   Allocate dynamic memory for that number of elements
Step 3 :   Accept the values from user and store into that memory
Step 4 :   Pass the address of that memory to the function (any)
Step 5 :   after using that memory free it explicitely




*/