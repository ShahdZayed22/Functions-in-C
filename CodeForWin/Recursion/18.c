#include <stdio.h>
#include <stdlib.h>

// Write a C program to find factorial of any number.

int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factorial = %d\n", factorial(num));
    return 0;
}
