///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    ChkVowel
//  Description    :    Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not
//  Input          :    Character
//  Output         :    Character 
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool ChkVowel(char cVowel)
{
    if (cVowel == 'a' || cVowel == 'e' ||
        cVowel == 'i' || cVowel == 'o' ||
        cVowel == 'u' || cVowel == 'A' ||
        cVowel == 'E' || cVowel == 'I' ||
        cVowel == 'O' || cVowel == 'U')
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
    char CValue = '\0';
    bool bRet = FALSE;

    printf("Enter Character:\n");
    scanf(" %c", &CValue);

    bRet = ChkVowel(CValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}

