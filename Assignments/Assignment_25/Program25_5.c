#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    // Convert to uppercase to make it case-insensitive
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    if(chDiv == 'A')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
