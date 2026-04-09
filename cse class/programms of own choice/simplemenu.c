#include <stdio.h>

int main() {
    int choice;

    printf("1. Hello\n2. Bye\n3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Hello!"); break;
        case 2: printf("Goodbye!"); break;
        case 3: printf("Exiting..."); break;
        default: printf("Invalid choice");
    }

    return 0;
}