#include <stdio.h>

int main() {
    int a = 10, b = 5;
    
    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);  // Addition
    printf("a - b = %d\n", a - b);  // Subtraction
    printf("a * b = %d\n", a * b);  // Multiplication
    printf("a / b = %d\n", a / b);  // Division
    printf("a %% b = %d\n\n", a % b); // Modulus (remainder)

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > 0 && b > 0) = %d\n", (a > 0 && b > 0)); // AND
    printf("(a > 0 || b < 0) = %d\n", (a > 0 || b < 0)); // OR
    printf("!(a > b) = %d\n\n", !(a > b));               // NOT

    // Assignment Operators
    printf("Assignment Operators:\n");
    int x = 10;
    x += 5;  // x = x + 5
    printf("x after x += 5: %d\n", x);

    x *= 2;  // x = x * 2
    printf("x after x *= 2: %d\n\n", x);

    // Increment / Decrement
    printf("Increment / Decrement:\n");
    int y = 5;
    printf("y++ = %d\n", y++);  // Post-increment
    printf("Now y = %d\n", y);
    printf("++y = %d\n", ++y);  // Pre-increment
    printf("y-- = %d\n", y--);  // Post-decrement
    printf("Now y = %d\n", y);

    return 0;
}
