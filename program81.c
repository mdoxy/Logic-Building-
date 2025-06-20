//input - 5
//output - 5 4 3 2 1
//        5      4      3      2      1
void Display(int iNo)
{
    int iCnt = 0, iNum = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iNum = iNo-1;
        printf("%d",iCnt);   
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