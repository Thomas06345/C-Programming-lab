#include <stdio.h>
int main() {
  int num,factorial=1;
  printf("enter the number\n");
  scanf("%d",&num);
  while(num>0){
    factorial=factorial*num;
    num=num-1;
    }
  printf("\nfactorial=%d",factorial);
  return 0;
  }
