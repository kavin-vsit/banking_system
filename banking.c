#include <stdlib.h>
#include <stdio.h>

void main_menu(),login(),logout(),balance(),deposit(),withdraw(),exit(),unavailable();
int choice,login_status=0;

void main_menu(){
    if(login_status==1){
        printf("Logout(1)\nCheck balance(2)\nDeposit money(3)\nWithdraw money(4)\nExit(0)\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                logout();
                break;
            case 2:
                balance();
                break;
            case 3:
                deposit();
                break;
            case 4:
                withdraw();
                break;
            case 0:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                main_menu();
        }
    }else{
        printf("Login(1)\n//Check balance(2)\n//Deposit money(3)\n//Withdraw money(4)\nExit(0)\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                login();
                break;
            case 0:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                main_menu();
        }
    }
}

void login(){
    //do real login stuff
    login_status=1;
    printf("Login unsuccessful, could not contact authentication servers, logged in as demo\n");
    main_menu();
}

void logout(){
    char username[20] = "demo";
    //get username
    login_status=0;
    printf("Logged out from %s successfully\n",username);
    main_menu();
}

void balance(){
    unavailable();
}

void deposit(){
    unavailable();
}

void withdraw(){
    unavailable();
}

void unavailable(){
    printf("This service is unavailable\nGo back to main menu(1)\nExit(0)\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            main_menu();
            break;
        case 0:
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid choice");
            unavailable();
    }
}

void main()
{
    main_menu();
}
