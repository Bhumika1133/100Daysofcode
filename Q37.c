//write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
    int i,a,b,hcf=1,lcm;
    printf("enter two numbers: ");
    scanf("%d,%d", &a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    lcm =(a*b)/hcf;
    printf("LCM=%d\n",lcm);
    return 0;

}