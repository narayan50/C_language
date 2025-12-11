#include<stdio.h>

int main(){
    int a=12,b=13;
    printf("a&b=%d\n" ,a&b);
    printf("a | b =%d\n", a|b);
    printf("a ^ b =%d", a^b);

    // left shift
    printf("a<<b =%d", a<<1);
    printf("a<<b =%d", b<<2);

    // right shift
    printf("a>>b =%d", a>>1);

    // ~ tlide

    printf("~a =%d", ~a);




    return 0;

}