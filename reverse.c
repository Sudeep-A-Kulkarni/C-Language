#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder, originalNumber;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Storing the original number to compare later
    originalNumber = number;

    // Reversing the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Checking if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
re