#include <stdio.h>

int main(){
    printf("Hello World!");
    int a = 1;
    int * pointera = &a;
    printf("The value a is %d\n", pointera);
    *pointera += 1;
    printf("The value of a is also %d\n", *pointera);
    return 0;
}