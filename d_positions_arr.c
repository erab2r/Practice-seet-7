// Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.

#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i =0; i<n; i++){
        scanf("%d",&A[i]);
    }
    for(i =0; i<n; i++){
        if(A[i] <= 10){
            printf("A[%d] = %d\n",i,A[i]);

        }
    }

}