#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 0; i < n; i++) {
        for (j = n - i - 1; j < n; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
