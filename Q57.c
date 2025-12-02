#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    int arr[n];
printf("enter the elements in the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
printf("sum of array =%d",sum);
return 0;
}