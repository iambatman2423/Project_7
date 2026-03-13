#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

int main() {
    int choice, num1, num2, result;

    do {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %\n");
        printf("Press 0 for exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 5) {
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Addition of %d\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Subtraction of is %d\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Multiplication of is %d\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = divide(num1, num2);
                    printf("Division is %d\n", num1, num2, result);
                }
                break;
            case 5:
                if (num2 == 0) {
                    printf("Error! Modulus by zero is not allowed.\n");
                } else {
                    result = modulus(num1, num2);
                    printf("Modulus is %d\n", num1, num2, result);
                }
                break;
            case 0:
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}