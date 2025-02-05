#include <stdio.h>
int main(){
  int i,limit,search;
  printf("\nenter the array length\n");
  scanf("%d",&limit);
  printf("enter your elements\n");
  int num[limit];
  for(i=0;i<limit;i++){
    scanf("%d",&num[i]);
  }
  printf("enter the element you want to search\n");
  scanf("%d",&search);
  for(i=0;i<limit;i++){
    if(search==num[i]){
      printf("The element %d is at the position %d\n",search,i+1);
    }
  }
  return 0;
}
