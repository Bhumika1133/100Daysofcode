//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
    int sum=0,dig,num;
    printf("enter a number: ");
    scanf("%d",&num);
    while (num>0)
    {
        dig=num%10;
        sum=sum+dig;
        num=num/10;

    }
    printf("sum of digits=%d",sum);
    return 0;
}