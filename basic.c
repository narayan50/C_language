#include<stdio.h>
int main(){
    int i = 10;
    short int si=20;
    long int li=30000;
    unsigned int ui=40000;

    // character types
    char c ='a';

    // floating point types
    float f=5.5;
    double d=3.14;
    long double ld=3.14159265358979323846L;
    printf("Data Types and their sizes in C:\n");
  printf("int: %d (size: %zu bytes)\n", i, sizeof(i));
    printf("short int: %d (size: %zu bytes)\n", si, sizeof(si));
    printf("long int: %ld (size: %zu bytes)\n", li, sizeof(li));
    printf("unsigned int: %u (size: %zu bytes)\n", ui, sizeof(ui));
    printf("char: %c (size: %zu bytes)\n", c, sizeof(c));
    printf("float: %.2f (size: %zu bytes)\n", f, sizeof(f));
    printf("double: %.2lf (size: %zu bytes)\n", d, sizeof(d));
    printf("long double: %.20Lf (size: %zu bytes)\n", ld, sizeof(ld));
    return 0;
}
