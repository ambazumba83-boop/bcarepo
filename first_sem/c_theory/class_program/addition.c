#include<stdio.h>
int main(){
    int choice;
    int account;
    int depositeamount,withdrawamount,balance;
    balance= depositeamount-withdrawamount

    printf("------welcome to my bank-------\n");
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.account view\n");
    printf("4.exit\n");
    printf("Enter your option:");
    printf("enter account no:");
    scanf("%d",&choice);
    if(choice ==1){
        printf("how much you want:");
        scanf("%d",depositeamount);
        printf("account updated :%d",depositeamount);
    }
    if(choice == 2){
        printf("how much you want to withdraw:");
        scanf("%d",&withdrawamount);
        printf("account updated :%d",withdrawamount);
    }
    if(choice == 3){
         printf("the total deposit amount is:");
        scanf("%d",&depositeamount);
        printf("account updated :%d",depositeamount);
        
    }
    if(choice == 4){
        printf("exit");

        return 0;
    }
}