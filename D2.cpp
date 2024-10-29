#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int N[T], M[T];

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N[i], &M[i]);
    }

    for (int i = 0; i < T; i++) {
        int acquaintanceships = N[i] * M[i];
        if (acquaintanceships % 2 == 0) {
            printf("Case #%d: Party time!\n", i + 1);
        } else {
            printf("Case #%d: Need more frogs\n", i + 1);
        }
    }

    return 0;
}

