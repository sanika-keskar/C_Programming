#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    if(str == NULL)
    {
        return;
    }

    printf("Output: ");
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}
