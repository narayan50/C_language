// #include<stdio.h>
// int main(){

//     int amount;
//     printf("Please enter your food amount:---");
//     scanf("%d", &amount);
//       if (amount>500){
//         printf("Congratulatiion you get free delivery on your food purchase of 500$");
//       }else{
//         printf("Thank you for your purchase purchase more to get free delivery");
//       }


//    }

// banking system

#include<stdio.h>
int main(){

    int balance=5000, withdraw;

    printf("please enter the withdrawl amount:----");
    scanf("%d", &withdraw);

    if (withdraw<=5000){
        printf("amount withdraw succefully\n");
        printf("Available balance :-%d" , withdraw-balance);

    }else{
        printf("Insufficient balance:-- " );
        printf("available blance:-%d" ,balance);
    }
   
    
}


