#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number: \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}