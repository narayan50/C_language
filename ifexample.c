#include<stdio.h>

int main(){
    int marks;

    printf("Please enter your marks:---");
    scanf("%d", &marks);
     if (marks>35 & marks<=50){
        printf("Congratulation you passed the exame and your grade is:--c");

     }else if (marks>50 && marks <=70){
         printf("Congratulation you passed the exame and your grade is:--B");
        
     } else if (marks >70 && marks <=100){
         printf("Congratulation you passed the exame and your grade is:--A");

     }else{
        printf("Failed");
     }
  
    return 0;

}