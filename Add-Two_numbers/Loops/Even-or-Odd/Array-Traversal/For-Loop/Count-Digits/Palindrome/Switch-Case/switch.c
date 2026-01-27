#include<stdio.h>
int main () {
    int choice;
    printf("1. Hello\n2. Bye\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
}

    switch(choice) {
        case 1:
        printf("Hello");
        break;

        case 2:
        printf("Bye");
        break;

        default:
        printf("Wrong Choice");

        return 0;

    
    }