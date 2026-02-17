#include<stdio.h>
int main (){
    int a[50],n,i,key,found=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element found at position %d\n",i+1);
    }
    else{
        printf("Element not found\n");
    }
}