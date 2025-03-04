#include <stdio.h>
#include <stdlib.h>

// Write a C program to print all even or odd numbers in given range.

int printNumbers(int start, int end, int isEven)
{
    if (start > end)
        return 0;

    if ((start % 2 == 0 && isEven) || (start % 2 != 0 && !isEven))
        printf("%d ", start);

    return printNumbers(start + 1, end, isEven);
}

int main()
{
    int start, end, choice;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    printf("Enter 1 for even numbers or 0 for odd numbers: ");
    scanf("%d", &choice);

    printNumbers(start, end, choice);

    return 0;
}
