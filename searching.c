// Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).
#include <stdio.h>

int main() {
    int n, x,i;
    scanf("%d", &n); 
    int A[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &x); 

    int found = -1;
    for (i = 0; i < n; i++) {
        if (A[i] == x) {
            found = i; 
            break;  
        }
    }

    printf("%d\n", found); 
    return 0;
}
