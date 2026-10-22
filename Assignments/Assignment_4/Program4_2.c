///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckEvenOdd
//  Description    :    Check Even or Odd Number
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return EXIT_SUCCESS
        ;
}
