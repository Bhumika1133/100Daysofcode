// write a program to input two numbers and display there sum,difference,product and quotient.
#include <stdio.h>
int main(){
    int num1,num2,sum,diff,prod;
    float quo;
    printf("enter the value of number1:");
    scanf("%d",&num1);
    printf("enter the value of number2:");
    scanf("%d",&num2);
    sum = num1+num2;
    diff = num1-num2;
    prod=num1*num2;
    quo=(float)num1/num2;
    printf("the sum of %d and %d is %d\n",num1,num2,sum);
    printf("the difference of %d and %d is %d\n",num1,num2,diff);
    printf("the product of %d and %d is %d\n",num1,num2,prod);
    printf("the quotient of %d and %d is %f\n",num1,num2,quo);
    return 0;
    

}