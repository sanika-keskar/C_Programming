///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    ChkEven
//  Description    :    Accept number from user and check whether number is even or odd
//  Input          :    Integer,Integer
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    20/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    bool bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    return 0;
}


