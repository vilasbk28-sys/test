#include <stdio.h>
int main(){
    int n,i;
    long fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial=%ld",fact);
    return 0;
}