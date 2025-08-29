//write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
    float length,breadth,area,peri;
    printf("enter the length:");
    scanf("%f",&length);
    printf("enter the breadth:");
    scanf("%f",&breadth);
    area=length*breadth;
    peri=2*(length+breadth);
    printf("area of rectangle:%f\n",area);
    printf("perimeter of rectangle:%f\n",peri);
    return 0;
}
