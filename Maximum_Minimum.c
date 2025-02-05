#include <stdio.h>
int main(){
  int i,limit,search,large_pose,small_pose;
  printf("\nenter the array length\n");
  scanf("%d",&limit);
  printf("enter your elements\n");
  int num[limit];
  for(i=0;i<limit;i++){
    scanf("%d",&num[i]);
  }
  int largest=num[0],smallest=num[0];
  for(i=0;i<limit;i++){
    if(largest<num[i]){
    largest=num[i];
    large_pose=i+1;
    }
    if(smallest>num[i]){
        smallest=num[i];
        small_pose=i+1;
  }
  }
  
  printf("the largest numbers in the array is %d and it's position is %d\n",largest,large_pose);
  printf("the smallest numbers in the array is %d and it's position is %d\n",smallest,small_pose);
  return 0;
}