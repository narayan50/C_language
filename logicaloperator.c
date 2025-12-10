#include <stdio.h>
int main (){
    int num1 , num2;
    printf("enter the value");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    // logical operators
    printf("logical AND operation (num1 && num2): %d\n", num1 && num2);
    printf("logical OR operation (num1 || num2): %d\n", (num1>num2) || (num1>num2));
    printf("logical NOT operation (!num1): %d\n", !(num1==num2));


}