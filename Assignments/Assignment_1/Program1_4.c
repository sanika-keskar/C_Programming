//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    Check
//  Description    :    Check Whether the Number is Divisible by 5 or not 
//  Input          :    Integer 
//  Output         :    Boolean
//  Author         :    Keskar Sanika Subhash
//  Date           :    19/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int  iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}
