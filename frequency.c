/*
author:-Thomas Cherian
date:- 19-02-25
program:- to count the frequency of each character in a given string.
*/
#include<stdio.h>
#include<string.h>
int main() {
  char istring[200];
  int freq[26]={0};
  printf("enter the string");
  fgets(istring,sizeof(istring),stdin);
  for(int i=0; istring[i]!='\0';i++){
    char ch=istring[i];
    if(istring[i]>='A' && istring[i]<='Z'){
      ch=ch+32;
    }
    if(ch>='a'&& ch<='z'){
      freq[ch-97]++;
    }
  }
  for(int i=0;i<26;i++){
    if(freq[i]!=0){
      printf("%c:%d\n",i+97,freq[i]);
    }
  }
  return 0;
}
