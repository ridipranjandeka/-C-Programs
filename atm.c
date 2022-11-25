// ATM TRANSACTION code

#include<stdio.h>
int main(){
    int user1=1000,user2=3000,user3=5000;
    int choice,repeat=1;
    printf("\n\t--TRANSACTION--\n");
    while(repeat == 1){
        printf("\nChoose from the follwing user:\n1. User1\n2. User2\n3. User3:\n");
        scanf("%d", &choice);
        if (choice == 1){
            printf("Sorry, transaction failled.\n");
        }
        else if (choice == 2){
            printf("Sorry, transaction failled.\n");
        }
        else if (choice == 3){
            printf("You can perform your transaction.\n");
        }
        else{
            printf("Wrong Input\n");
        }
        printf(".\nEnter '1' to continue\nEnter '2' to exit:");
        scanf("%d", &repeat);
        if (repeat == 2){
            printf("\n\t--THANK YOU--\n\n");
        }
    }
    return 0;
}