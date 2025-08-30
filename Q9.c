// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main(){
    float r,t,si,ci,p;
    printf("enter principal:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    ci=p* pow((1+r/100),t)-p;
    printf("simple interest is %f,compound interest is %f\n",si,ci);
    return 0;
}