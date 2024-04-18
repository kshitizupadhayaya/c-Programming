#include <stdio.h>

int Prime(int n) {
    if (n <= 1) {
        return 0;  // Not a prime number
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // Not a prime number
        }
    }

    return 1;  // Prime number
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (Prime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}