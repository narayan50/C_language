#include <stdio.h>
int main (){
    int n1 , n2 ,max;
    printf("enter the value::\n");
    scanf("%d", &n1);  
     printf("enter second the value::\n");
    scanf("%d", &n2);  
    // ternary operator
    max =(n1>n2) ? n1 : n2;
    printf("the maximum value is : %d\n", max);
}