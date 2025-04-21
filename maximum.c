// Take an array from input and print the maximum value of that array.

#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    int max = arr[0];
    for(i =0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Maximum value: %d\n", max);
    return 0;
}