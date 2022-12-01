#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int flip();

int main()
{
    int continueCheck = 0;
    char input[4];
    int result;
    while (continueCheck == 0)
    {
        printf("Enter flip or type \"exit\" to exit: ");
        scanf("%s", input);
        if (strcmp(input, "flip") == 0)
        {
            result = flip();
            if (result == 0)
            {
                printf("Tails! \n");
            }
            else if (result == 1)
            {
                printf("Heads! \n");
            }
        }
        else if (strcmp(input, "exit") == 0)
        {
            continueCheck = 1;
        }
        else
        {
            printf("Invalid Input! \n");
        }
    }
    return 0;
}

int flip()
{
    return (rand() % 2);
}