#include <stdio.h>
int main (){
    int n,i;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of the array:");
    for(i=0;i<n;i++)
    {
    scanf ("%d",&arr[i]);
    }

printf("the array elements are:\n");
for (i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}
