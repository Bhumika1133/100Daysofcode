#include <stdio.h>
int main() {
    int i,n,ev=0,odd=0;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++){
    if(arr[i] % 2 == 0)
    ev++;
else
odd++;

    

}
printf("even number=%d",ev);
printf("odd number=%d",odd);
return 0;
}