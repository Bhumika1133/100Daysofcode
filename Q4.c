//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    float r,area,cir,pi=3.14;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    area=pi*r*r;
    cir=2*pi*r;
    printf("area of circle:%f\n",area);
    printf("circumference of circle:%f\n",cir);
    return 0;
}
