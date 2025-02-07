#include <stdio.h>
int main(){
  int row,col;
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
        matrix[i][j]=0;
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
  return 0;
}
