#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    char choice;

    do {
        printf("\n--- Simple C Calculator ---\n");
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);
// Note the space before %c - it consumes any leftover newline characters
        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            printf("Invalid input. Please enter numbers.\n");
            break; 
        }

        switch (operator) {
            case '+': printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); break;
            case '-': printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); break;
            case '*': printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); break;
            case '/':
                if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;
            default: printf("Invalid operator.\n");
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}
