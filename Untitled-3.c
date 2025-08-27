#include<stdio.h>

int main() {
    int a = 6, b = 7;

    a=a+b-(b=a);
    printf("a = %d, b = %d", a, b);
    
    return 0;
}