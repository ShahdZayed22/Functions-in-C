#include <stdio.h>

// Write a C program to find all prime numbers between given interval

int isPrime(int num) {
    if (num < 2) 
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0;
    }
    return 1;
}

int main() {
    int start, end;
    
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    
    printf("Prime numbers between %d and %d are: ", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
