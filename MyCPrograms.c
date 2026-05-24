#include <stdio.h>

int main() {
    int len=5,arr,n;
    char str[]="hello";
    for(int i=1;i<=len;i++){
        printf("%.*s\n",i,str);
    }

    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    return 0;
}