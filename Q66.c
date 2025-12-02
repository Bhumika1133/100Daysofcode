#include <stdio.h>
int main() {
    int i,n,pos,num;
    printf("enter the size of an array");
    scanf("%d",&n);
    int arr[100];
    printf("enter the elements in an array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to insert");
    scanf("%d",&num);
    pos=0;
    while (pos < n && arr[pos] < num) {
        pos++;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = num;
    n++;   // size increases

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}