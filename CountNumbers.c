#include <stdio.h>


int main() {
    int count = 0, num;
    scanf("%d", &num);
    while(num) {
        count++;
        num/=10;
    }
    printf("%d", count);

    return 0;
}