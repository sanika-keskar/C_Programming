///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    DisplayFactor 
//  Description    :    Accept one number from user and print  even factors of that numbers 
//  Input          :    Integer 
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter Character\n");
    scanf("%c", &CValue);

    DisplayConvert(CValue);

    return 0;
}
