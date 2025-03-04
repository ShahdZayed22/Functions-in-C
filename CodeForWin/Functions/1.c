#include <stdio.h>

// Write a C program to find cube of any number using function.

float cube(float num) {
    return num * num * num;
}

int main() {
    float num;
    
    printf("Enter a number: ");
    scanf("%f", &num);
    
    printf("Cube of %.2f is %.2f\n", num, cube(num));
    
    return 0;
}
