#include <stdio.h>
int main() {
    int num;
    printf("enter the value :\n");
    scanf("%d",&num);
    // assignment operators
    num +=5;
    printf("after +=5 , num=%d\n", num);
    num -=3;
    printf("after substracting 3 , num=%d\n", num);
    num*=5;
    printf("after multiplication by 5 num=%d\n", num);
      num/=5;
    printf("after division by 5 num=%d\n", num);
     num%=5;
    printf("after modulus by 5 num=%d\n", num);
    

    return 0;
}