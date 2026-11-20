#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHex\tOctal\n");
    printf("--------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt > 32 && iCnt < 127)
        {
            printf("%c\t%d\t0X%X\t0%o\n", iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf(" \t%d\t0X%X\t0%o\n", iCnt, iCnt, iCnt, iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
