#include <stdio.h>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The sum of %d and %d is %d\n", a+ b);

    return 0;
}