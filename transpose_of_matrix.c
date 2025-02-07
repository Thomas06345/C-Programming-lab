/*
author: Thomas Cherian
        CSE-B
        Rollno:71
Date: 7-2-25
program: To find transpose of the matrix
*/
#include <stdio.h>
int main(){
  int row,col;
  printf("enter the row and column of the matrices:\n");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  printf("enter the elements of first matrix:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  printf("The matrix is:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
    }
  printf("\n");
 }
 printf("The transpose of the matrix is:\n");
 for(int i=0;i<col;i++){
  for(int j=0;j<row;j++){
    printf("%d\t",matrix[j][i]);
  }
 printf("\n");
 }
 
  return 0;
}
