#include <stdio.h>

// Function definition
int Add(int num1, int num2) {  // use int because we return a value
    return num1 + num2;
}

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = Add(a, b);   // function call
    printf("Sum = %d", result);

    return 0;
}