// Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
    int no,ev,od;
    printf("enter an integer number:");
    scanf("%d",&no);
    if(no%2==0)
    {
       printf("%d is ev\n",no); 
    }
    else
    {
        printf("%d is od\n",no);
    }
    return 0;
    
}