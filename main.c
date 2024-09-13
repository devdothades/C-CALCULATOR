#include <stdbool.h>
#include <stdio.h>


/* artihmetic functions */
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
    // initailize this outside of the while loop to prevent bugs
    int num1, num2; // initalize variable for the inputted numbers
    char check;


    bool gameRunning = 1; // boolean value 1 for true and 0 for false

    // if the boolean is always true this loop will continue
    while (gameRunning) {
        /* declare the gamechoice to be used at the bottom of the code this
         * variable will be able to end or resume the program */
        int gameChoice;

        printf("=============================================================\n");

        while (1) {
            printf("Please enter for num1: ");

            if (scanf("%d", &num1) == 1) {
                // If valid integer is entered
                break; // Exit loop when valid input is received
            } else {
                printf("Invalid input. Please enter an integer.\n");

                // Clear the input buffer
                while ((check = getchar()) != '\n' && check != EOF);
            }
        }

        // Loop for num2
        while (1) {
            printf("Please enter for num2: ");

            if (scanf("%d", &num2) == 1) {
                // If valid integer is entered
                break; // Exit loop when valid input is received
            } else {
                printf("Invalid input. Please enter an integer.\n");

                // Clear the input buffer
                while ((check = getchar()) != '\n' && check != EOF);
            }
        }

        printf("=============================================================\n");

        /* informs the user that this are the choices to pick */
        // Declare an array of string literals (char pointers)
        const char *arithmetic_choices[] = {"Addition", "Subtraction", "Division", "Multiplication"};

        // Calculate the number of choices
        int num_choices = sizeof(arithmetic_choices) / sizeof(arithmetic_choices[0]);

        // Loop to print each choice
        for (int i = 0; i < num_choices; i++) {
            printf(" [%d] %s\n", i + 1, arithmetic_choices[i]); // Use i+1 for numbering from 1
        }


        int choice; // intialize the variable choice inside the loop to prevent the bug


        while (1) {
            printf("enter your choice: ");


            if (scanf("%d", &choice) == 1) {
                printf("=============================================================\n");
                //checks if the user input is integer
                if (choice > 5) {
                    printf("Invalid input. Number should be below 5\n"); // prints if the user inputed above 5 integer
                } else {
                    break; // breaks the while loop if the verification succeeded
                }
            } else {
                printf("Invalid input. Please enter an integer.\n");
                while ((check = getchar()) != '\n' && check != EOF); // clear the input buffer
            }
        }

        // calls the arithmetic functions above the main function
        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("%d - %d = %d\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("%d / %d = %d\n", num1, num2, division(num1, num2));
                break;
            case 4:
                printf("%d * %d = %d\n", num1, num2, multiplication(num1, num2));
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
        printf("=============================================================\n");

        while (1) {
            printf("Try again? 1 for yes 0 for no: ");


            if (scanf("%d", &gameChoice) == 1) {
                // Check if input is an integer
                if (gameChoice == 1) {
                    printf("Game stopped.\n");
                    gameRunning = 0; // Stop the game loop
                    break;
                } else if (gameChoice == 0) {
                    printf("Game continues.\n");
                    break;
                } else {
                    printf("Invalid input. Please enter 0 or 1.\n");
                }
            } else {
                printf("Invalid input. Please enter an integer (0 or 1).\n");

                // Clear the input buffer
                while ((check = getchar()) != '\n' && check != EOF);
            }
        }

    }
    return 0;
}
