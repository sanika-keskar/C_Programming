///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    Display
//  Description    :    Accept one number from user and print that number of * on screen
//  Input          :    Integer 
//  Output         :    characters * 
//  Author         :    Keskar Sanika Subhash
//  Date           :    19/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNO)
{
    int iCnt = 0;

    while(iCnt < iNO)
    {
        printf("*");
        iCnt++;

    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0; 
}