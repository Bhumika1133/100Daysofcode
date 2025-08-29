//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap:%d,%d\n",a,b);
    return 0;
}