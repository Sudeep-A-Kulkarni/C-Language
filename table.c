#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    printf("Multiplication Table of %d:\n", number);
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}