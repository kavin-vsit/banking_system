#include <stdlib.h>
#include <stdio.h>

void main_menu(),balance(),deposit(),withdraw(),exit(),unavailable();
int choice;

void main_menu(){
    printf("Check balance(1)\nDeposit money(2)\nWithdraw money(3)\nExit(0)\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            balance();
            break;
        case 2:
            deposit();
            break;
        case 3:
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
    printf("This service is unavailable\nGo back to main menu(1)\nExit(0)\n");
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
