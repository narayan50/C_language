#include <stdio.h>
int main (){
    int n;
    printf("enter the value::\n");
    scanf("%d", &n);  
    printf("pre increment ++n: %d\n", ++n);
    printf("post increment n++: %d\n", n++);
    printf("-----------------------------------\n");
    printf("pre decrement --n: %d\n", --n);
    printf("post decrement n--: %d\n", n--);
    printf("after post decrement the value of n is=%d\n", n);
}