/*Write a C program to read the age of a candidate and determine whether it is
eligible for casting his/her own vote.
Test Data: 21
Expected Output: Congratulation! You are eligible for casting your vote.
*/

#include <stdio.h>
int main() {
  int age;
  printf("enter your age\n");
  scanf("%d",&age);
  if(age>18){
    printf("\nCongratulation! You are eligible for casting your vote.");
  }
  else{
    printf("\nYour are two young to caste your vote");
  }
 
 return 0;
 }
