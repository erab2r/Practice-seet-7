// Take an array from input and print all the even numbers of that array.

#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2 == 0){
            printf("%d ",arr[i]);
        }
    }
}