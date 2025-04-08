/*********************************************
Author: Thomas Cherian
date: 8-04-25
program: to create a file and input characters
**********************************************/
#include<stdio.h>
int main(){
  FILE *fp;
  char ch;
  fp = fopen("file.txt","w");
  while(ch=getc(stdin)!='z'){
    putc(ch,fp);
  }
  fclose(fp);
  fp = fopen("file.txt","r");
  while(ch=getc(fp)!=EOF){
    printf("%c",ch);
  }
  fclose(fp);
  return 0;
}
