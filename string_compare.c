/*
author:-Thomas Cherian
date:- 19-02-25
program:- to input two strings and compare them using the strcmp() function.
*/
#include <stdio.h>
#include <string.h>
int main(){
char str1[10],str2[10];
int result;
printf("enter first string\n");
scanf("%s",str1);
printf("enter second string\n");
scanf("%s",str2);
result= strcmp(str1,str2);
if(result>0){
  printf("first String is greater\n");
}
else if(result<0){
  printf("second String is greater\n");
}
else{
  printf("both strings are equal\n");
}
return 0;
}
