#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLastIndex = -1;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iIndex;
        }
        str++;
        iIndex++;
    }

    return iLastIndex;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: \n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}
