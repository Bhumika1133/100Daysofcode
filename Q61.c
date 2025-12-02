#include <stdio.h>
int main(){
    int i,n,found=0,search;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search){
            found=1;
            break;
        }
    }
    if(found)
    
        printf("element %d found at position %d\n",search,i+1);
        else
        printf("element  %d not found in the array",search);
    return 0;
    

}