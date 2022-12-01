#include <stdio.h>
#include <stdlib.h>
void addNumbers(float nu1, float nu2);
void subtractNumbers(float nu1, float nu2);
void multiplyNumbers(float nu1, float nu2);
void divideNumbers(float nu1, float nu2);
void modNumbers(float nu1, float nu2);

int main(){
    float num1;
    float num2;
    char sign;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the operation: ");
    scanf(" %c", &sign);

    switch(sign) {
      case '+' :
         addNumbers(num1, num2);
         break;
      case '-' :
         subtractNumbers(num1, num2);
         break;
      case '*' :
         multiplyNumbers(num1, num2);
         break;
      case '/' :
         divideNumbers(num1, num2);
         break;
      case '%' :
         modNumbers(num1, num2);
         break;
      default :
         printf("Invalid operation");
         break;
   }
    return 0;
}

void addNumbers(float nu1, float nu2){
    printf("%f", nu1 + nu2);
}
void subtractNumbers(float nu1, float nu2){
    printf("%f",nu1 - nu2);
}
void multiplyNumbers(float nu1, float nu2){
    printf("%f",nu1 * nu2);
}
void divideNumbers(float nu1, float nu2){
    printf("%f",nu1 / nu2);
}
void modNumbers(float nu1, float nu2){
    int temp1 = nu1;
    int temp2 = nu2;
    printf("%d", temp1 % temp2);
}