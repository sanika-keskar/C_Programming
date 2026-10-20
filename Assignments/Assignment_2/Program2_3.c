///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    Display
//  Description    :    Accept one number from user if number is less than 10 then print HEllo otherwise print Demo
//  Input          :    Integer 
//  Output         :    string 
//  Author         :    Keskar Sanika Subhash
//  Date           :    20/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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

