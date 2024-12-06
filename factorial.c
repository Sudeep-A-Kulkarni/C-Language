#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    unsigned long long result;

    // Taking input from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    // Handling negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating the factorial
        result = factorial(number);
        // Displaying the result
        printf("Factorial of %d = %llu\n", number, result);
    }

    return 0;
}
