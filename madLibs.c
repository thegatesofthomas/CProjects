#include <stdio.h>
#include <stdlib.h>

int main()
{
    char verb[20];
    char adj[20];
    printf("Enter a verb: ");
    scanf(" %s", verb);
    printf("Enter a adjective: ");
    scanf(" %s", adj);

    printf("She let me %s ", verb);
    printf("it because ");
    printf("I'm %s \n", adj);
    return 0;
}