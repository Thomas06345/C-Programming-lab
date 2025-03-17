/*********************************************
Author: Thomas Cherian
date: 17-03-25
program: to check is the given number is odd or even using functions
and return 0 if number is odd or 1 if number is even
**********************************************/
#include <stdio.h>
int evenodd(int);
int main() {
int num,flag;
printf("enter the number\n");
scanf("%d",&num);
flag=evenodd(num);
if(flag==0){
  printf("value=1\n");
}
else{
  printf("value=0\n");
}
return 0;
}
int evenodd(int num){
int flag;
flag=num % 2;
return flag;
}
