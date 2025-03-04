#include <stdio.h>

// Write a C program to print all Armstrong numbers between given interval

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    int original = num, sum = 0, digits = countDigits(num);
    
    while (num > 0) {
        int digit = num % 10;
        sum += power(digit, digits);
        num /= 10;
    }
    
    return (sum == original);
}

int main() {
    int start, end;

    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
