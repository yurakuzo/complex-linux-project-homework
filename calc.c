#include <math.h>
#include <stdio.h>
#include "calc.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

double factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial not defined for negative numbers!\n");
        return 0;
    }
    if (n == 0) return 1;
    
    double result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double square_root(double n) {
    if (n < 0) {
        printf("Error: Cannot calculate square root of negative number!\n");
        return 0;
    }
    return sqrt(n);
}

