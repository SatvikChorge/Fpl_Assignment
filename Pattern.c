#include <stdio.h> 

int main() {
    int rows = 5, start = 2;
    for(int i = 0; i <= rows; i++) {
        int num = start;
        int diff = 1;
        for(int j = 0; j <= i; j++) {
            printf("%d ", num);
            num -= diff;
            diff++;
        }
        printf("\n");
        start += (6-i);
    }

    return 0;
}