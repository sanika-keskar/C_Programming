///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    DisplayFactor 
//  Description    :    Accept one number from user and print  even factors of that numbers 
//  Input          :    Integer 
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    DisplayFactor 
//  Description    :    Accept one number from user and print  even factors of that numbers 
//  Input          :    Integer 
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if ((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    DisplayFactor(&iValue);

    return 0;
}
