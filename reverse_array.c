#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
//This is comment