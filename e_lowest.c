// Given a number N and an array A of N numbers. Print the lowest number and its position.

#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int min =A[0];
    int pos = 1;
    for(i=0; i<n; i++){
        if(A[i]<min){
            min = A[i];
            pos = i+1;
        }
    }
    printf("%d %d\n", min, pos);

    return 0;


}