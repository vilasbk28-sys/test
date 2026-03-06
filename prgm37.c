#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=20;
    printf("before swap:x=%d\n",x,y);
    swap(x,y);
    printf("after swap:x=%d y=%d",x,y);
    return 0;
}