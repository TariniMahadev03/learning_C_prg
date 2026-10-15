#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("false");
        return 0;
    }

    while (n % 4 == 0) {
        n = n / 4;
    }

    if (n == 1) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}