#include <stdio.h>
int main(){
    int i,n,temp;
    printf("enter the size of an array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int end=n-1,start=0;
while(start<end){
    temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
printf("reversed array:");
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}