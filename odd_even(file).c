#include<stdio.h>
void readfile(FILE *fp){
  int num;
  while(fscanf(fp,"%d",&num)==1){
    printf("%d ",num);
  }
  fclose(fp);
}  
int main(){
  FILE *fp,*fp2,*fp3;
  fp=fopen("num.txt","r");
  fp2=fopen("odd.txt","w");
  fp3=fopen("even.txt","w");
  int num;
  while(fscanf(fp,"%d",&num)==1){
    if(num%2==0){
      fprintf(fp3,"%d ",num);
    }
    else{
      fprintf(fp2,"%d ",num);
    }
  }
  fclose(fp);
  fclose(fp2);
  fclose(fp3);
  printf("\nThe number file contains");
  fp=fopen("num.txt","r");
  readfile(fp);
  printf("\nThe odd number file contains");
  fp2=fopen("odd.txt","r");
  readfile(fp2);
  printf("\nThe even number file contains");
  fp3=fopen("even.txt","r");
  readfile(fp3);
  return 0;
}
