#include<stdio.h>

int main() {
    int count = 0, num = 1000;

    while(num) {
        count++;
        num/=10;
    }
    printf("%d", count);
    
    return 0;
}