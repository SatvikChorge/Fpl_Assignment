#include <stdio.h>

int main() {
    int i,n,arr;
    printf("Enter number of values");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Simple input numbers");
        scanf("%d", &arr+i);
    }
    printf("%d",arr+i);

    return 0;
}