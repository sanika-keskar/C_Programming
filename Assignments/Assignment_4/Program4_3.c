//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    FindGreater
//  Description    :    Find the Greater of Two Numbers
//  Input          :    Integer
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("First Number is Greater");
    }
    else
    {
        printf("Second Number is Greater");
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the First number:");
    scanf("%d",&iValue1);

    printf("Enter the Second Number:");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);



    return 0; 
}

