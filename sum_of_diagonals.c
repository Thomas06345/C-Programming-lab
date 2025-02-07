#include <stdio.h>
int main(){
  int row,col,sum=0;
  printf("enter the row and column:\n");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  printf("enter the elements:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(i==j){
        sum=sum+matrix[i][j];
      }
    }
  }
  printf("The matrix is:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
    }
  printf("\n");
 }
 printf("sum of matrix=%d",sum); 
  return 0;
}
