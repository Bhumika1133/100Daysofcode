// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
    int s,remains,h,m;
    printf("enter time in seconds:");
    scanf("%d",&s);
    h=s/3600;
    remains=s%3600;
    m=remains/60;
    remains=remains%60;
    printf("%d,%d,%d\n",h,m,remains);
    return 0;
}