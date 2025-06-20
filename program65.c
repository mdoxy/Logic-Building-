//reverse a number 987 = 789
/*eg.751 % 10=1 
irev=0;
irev * 10 + digit;
0 * 10 + 1 = 1
1 * 10 + 5 = 15
15 * 10 + 7 = 157
*/
#include<stdio.h>
 
int Reverse(int iNo)
{
    int iRev = 0, iDigit = 0;


    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter digit: ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reversed number is: %d\n",iRet);
    return 0;
}