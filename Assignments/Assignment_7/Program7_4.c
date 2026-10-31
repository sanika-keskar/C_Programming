
#include <stdio.h>
#include <stdlib.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayOdd(iValue);

    return EXIT_SUCCESS;
}
