//Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int rev =0;
    int i;
    int num;
    int dig;
    printf("enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    printf("%d\n",rev);
    return 0;
}