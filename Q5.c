//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main(){
    float c,f;
    printf("enter the temperature in celsius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("f=%f\n",f);
    return 0;
}