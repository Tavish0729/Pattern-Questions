#include <stdio.h>

int main() {
    int i, j, n = 4;

    for (i = 1; i <= n; i++) {
    
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
