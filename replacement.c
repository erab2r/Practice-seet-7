// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Replace every positive number by 1.
// Replace every negative number by 2.
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>0){
            a[i] = 1;
        }
        else if(a[i]<0) {
            a[i] = 2;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}