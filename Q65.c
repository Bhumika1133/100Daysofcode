#include <stdio.h>
int main(){
    int i,n,search,start,end,mid,found;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&search);
    start=0;
    end=n-1;
    found=0;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==search){
            found =1;
            break;
        }
        else if(arr[mid]<search){
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
 if (found)
        printf("Element %d found at position %d\n", search, mid + 1);
    else
        printf("Element %d not found\n", search);

    return 0;
}