//Accept 2 numbers from user and perform it's addition 

#include <stdio.h>

int main()
{
    int i,j,k;
    
    printf("Enter first number: \n");
    scanf("%d",&i);

    printf("Enter second number: \n");
    scanf("%d",&j);

    k = i + j;

    printf("Adittion is: %d\n ",k);


    return 0;
}