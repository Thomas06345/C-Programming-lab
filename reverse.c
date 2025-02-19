/*
author:-Thomas Cherian
date:- 19-02-25
program:- to reverse a string entered by the user without using string library functions. 
*/
#include <stdio.h>
int main(){
  char string[20];
  printf("enter the string");
  scanf("%s",string);
  char temp;
  int len;
  for(len=0;string[len]!=0;len++);
  int i=len-1;
  for(int j=0; j<len/2;j++){
    temp=string[i];
    string[i]=string[j];
    string[j]=temp;
    i--;
  }
  printf("the revesred string is:%s\n",string);
  return 0;
}
