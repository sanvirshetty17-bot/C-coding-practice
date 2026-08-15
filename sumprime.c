#include <stdio.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            found = 1;
        }
    }

    if (!found) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    }

    return 0;
}