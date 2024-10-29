#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long LHS = (long long)a * b;
    long long RHS = (long long)c - d;

    if (LHS == RHS) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
