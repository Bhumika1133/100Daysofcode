#include <stdio.h>
int main(){
    int i,n1,n2,j;
    printf("enter the size of array 1:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter elements in array 1:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of 2 array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter the elements in second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[n1+n2];
    for(i=0;i<n1;i++)
    {
        merged[i]=arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        merged[i+j]=arr2[j];
    }
    printf("enter the merged array");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",merged[i]);
    }
    return 0;

}