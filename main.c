#include <stdbool.h>
#include <stdio.h>


int addition(int num1, int num2) {
    return num1 + num2;
}

int subtraction(int num1, int num2) {
    return num1 - num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

int multiplication(int num1, int num2) {
    return num1 * num2;
}


int main(void) {
    int num1, num2;
    bool gameRunning = 1;


    while (gameRunning) {
        printf("Please enter for num1: ");
        scanf("%d", &num1);

        printf("Please enter for num2: ");
        scanf("%d", &num2);

        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Division\n");
        printf("[4] Multiplication\n");


        int choice;

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n",num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("%d - %d = %d\n",num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("%d / %d = %d\n",num1, num2, division(num1, num2));
                break;
            case 4:
                printf("%d * %d = %d\n",num1, num2, multiplication(num1, num2));
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
        printf("=============================================================\n");
        printf("Try again? 1 for yes 0 for no: ");
        scanf("%d", &gameRunning);


        if (gameRunning == 0) {
            gameRunning = 0;
        }
    }
    return 0;
}
