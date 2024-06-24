//Accept 2 numbers from user and perform it's addition 

#include <stdio.h>

int main()
{
    //int i,j,k;
    float fValue1=0.0,fValue2=0.0;
    float fResult=0.0;

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Adittion is: %f\n ",fResult);


    return 0;
}

/*
   
   If user is adding any decimal numbers we can't use in datatype we have to use float to deal with decimal values
   float fValue1 indicated fValue 'f' prefix becuase it's float and since it's float it's initialization value is 0.0
   and scanf %f is changed.

*/