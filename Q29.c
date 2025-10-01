//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    unsigned long long fact =1;
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    printf("%lld\n",fact);
    return 0;
    


}