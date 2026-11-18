#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Please enter full name: \n");
    scanf(" %29[^\n]",Name);

    printf("Your name is %s\n",Name);

    return EXIT_SUCCESS;
}