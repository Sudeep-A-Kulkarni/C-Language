#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    } else {
        printf("%d is not equal to %d\n", num1, num2);
    }
    return 0;
}
