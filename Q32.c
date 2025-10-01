//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int i,num,num1,rev=0;
    printf("enter a number:");
    scanf("%d",&num);
    num1=num;
    while(num>0){
        int dig=num%10;
        rev = rev*10+dig;
        num = num/10;

    }
    if(num1==rev)
    {printf("palindrome\n");
    }
    else{
        printf("not palindrome\n");
    }
    return 0;
}