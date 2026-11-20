#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    if(str == NULL)
    {
        return FALSE;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: \n");
    scanf(" %c", &cValue); // Notice space before %c to skip newline

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}
