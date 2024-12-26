#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    double num1, num2;

    printf("\nSimple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Factorial\n");
    printf("6. Square Root\n");
    printf("Choose operation (1-6): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", add(num1, num2));
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", subtract(num1, num2));
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", multiply(num1, num2));
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", divide(num1, num2));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            printf("Result: %.0f\n", factorial((int)num1));
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            printf("Result: %.2f\n", square_root(num1));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

