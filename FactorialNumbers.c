#include <stdio.h>

int main() {
    int f = 1, i = 1, n = 6;

    for(;i <= n; f *= i, i++) {
        printf("\n%d", f);
    }

    return 0;
}