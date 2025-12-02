#include <stdio.h>
int main(){
    int i,n,p=0,ne=0,z=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            p++;
        else if(arr[i] < 0)
            ne++;
        else
            z++;
    }

    printf("Positive numbers = %d\n", p);
    printf("Negative numbers = %d\n", ne);
    printf("Zeroes = %d\n", z);

    return 0;


}