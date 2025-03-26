/*
author:-Thomas Cherian
date:- 19-02-25
program:-  program to calculate the power of a number using recursion. 
*/
#include <stdio.h>
int p(int n1,int n2){
  if (n2==0){
  return 1;
  }
  else{
  return n1*p(n1,n2-1);
  }
}
int main(){
int base,exp,power;
  printf("enter the base number\n");
  scanf("%d",&base);
  printf("enter the exponent\n");
  scanf("%d",&exp);
  power = p(base,exp);
  printf("The power of %d raised to %d = %d\n",base,exp,power);
  return 0;
}
