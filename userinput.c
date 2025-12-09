#include <stdio.h>

int main() {

    int age;
    float marks;
    char grade;
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // space to handle newline

    // Display input
    printf("\nYour details are:\n");
    printf("Name : %s\n", name);
    printf("Age  : %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}
