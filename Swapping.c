#include<stdio.h>
int main() {
    int a = 6, b = 7;
    a = a + b - (b = a);
    printf("a = %d \nb = %d", a, b);

return 0;
}
