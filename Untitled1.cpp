#include <stdio.h>

int main() {
    int int1, int2;
    float float1, float2;

    // Input for integers
    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    // Input for float numbers
    printf("Enter two float numbers: ");
    scanf("%f %f", &float1, &float2);

    // Addition
    printf("Addition of integers: %d + %d = %d\n", int1, int2, int1 + int2);
    printf("Addition of float numbers: %.2f + %.2f = %.2f\n", float1, float2, float1 + float2);

    // Multiplication
    printf("Multiplication of integers: %d * %d = %d\n", int1, int2, int1 * int2);
    printf("Multiplication of float numbers: %.2f * %.2f = %.2f\n", float1, float2, float1 * float2);

    // Division
    // Check if divisor is not zero
    if (int2 != 0) {
        printf("Division of integers: %d / %d = %.2f\n", int1, int2, (float)int1 / int2);
    } else {
        printf("Division of integers: Cannot divide by zero.\n");
    }

    // Check if divisor is not zero
    if (float2 != 0.0) {
        printf("Division of float numbers: %.2f / %.2f = %.2f\n", float1, float2, float1 / float2);
    } else {
        printf("Division of float numbers: Cannot divide by zero.\n");
    }

    return 0;
}

