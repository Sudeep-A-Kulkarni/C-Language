#include <stdio.h>

int main() {
    int num1, num2;
    float division;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        division = (float)num1 / num2;
        printf("Division: %.2f\n", division);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0;
}
