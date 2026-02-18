#include <stdio.h>
#define sQr(x)(x*x)
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    printf("square =%d",sQr(n));
    return 0;
}