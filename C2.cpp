#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int A[T], B[T];

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A[i], &B[i]);
    }

    for (int i = 0; i < T; i++) {
        if (A[i] > B[i]) {
            printf("Case #%d: Go-Jo\n", i + 1);
        } else {
            printf("Case #%d: Bi-Pay\n", i + 1);
        }
    }

    return 0;
}
