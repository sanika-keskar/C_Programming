/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckCharacterType
//  Description    :    Identify Character Type
//  Input          :    character
//  Output         :    String
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char Ch)
{
    if(Ch >= 'A' && Ch <= 'Z')
    {
        printf("It is UpperCase");
    }
    else if (Ch >= 'a' && Ch <= 'z')
    {
        printf("It is Lowercase");
    }
    else if(Ch >= '0' && Ch <= '9')
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is a Special Symbol");
    }
}
int main()
{
    char CValue ='\0';
    printf("Enter a Character: \n");
    scanf("%c",&CValue);

    CheckCharacterType(CValue);
    return EXIT_SUCCESS;
}
