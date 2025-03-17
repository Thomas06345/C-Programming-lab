/*********************************************
Author: Thomas Cherian
date: 17-03-25
program: to find multiplication using function
**********************************************/
#include <stdio.h>
int multiply(int,int);
int main() {
int num1,num2,product;
printf("enter the numbers\n");
scanf("%d%d",&num1, &num2);
product=multiply(num1,num2);
printf("the product = %d",product);
return 0;
}
int multiply(int num1,int num2){
int product;
product=num1 * num2;
return product;
}

