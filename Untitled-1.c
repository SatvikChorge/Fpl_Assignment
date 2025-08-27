#include<stdio.h>

int main() {
    int f = 1, i = 1, n = 10;

    for(;i<=n;f*=i,i++) {
        printf(" %d ", f);
    }
    
    return 0;
}