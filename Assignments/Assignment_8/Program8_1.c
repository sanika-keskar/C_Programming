
#include <stdio.h>
#include <stdlib.h>

void Number(int iNo)
{
   
    if(iNo < 50)
    {
        printf("It is Small Number");
    }
    else if (iNo >= 50 && iNo <= 100)
    {
        printf("It is Medium Number");
    }
    else
    {
        printf("It is Larger Number");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}
