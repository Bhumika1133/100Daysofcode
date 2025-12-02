#include <stdio.h>
int main(){
    int i,n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    if(arr[i]<min)
    min=arr[i];

    }
    printf("maximum array element=%d\n",max);
    printf("minimum array element=%d\n",min);
    return 0;
}