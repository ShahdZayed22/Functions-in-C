#include <stdio.h>

// Write a C program to check whether a number is palindrome or not

int isPalindrome(int num, int reversed) {
    if (num == 0)
        return reversed;
    return isPalindrome(num / 10, reversed * 10 + (num % 10));
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == isPalindrome(num, 0))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
