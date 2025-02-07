/*
author: Thomas Cherian
        CSE-B
        Rollno:71
Date: 7-2-25
program: To add two matrices
*/
#include <stdio.h>
int main(){
  int row,col;
  printf("enter the row and column of the matrices:\n");
  scanf("%d%d",&row,&col);
  int matrix[row][col],matrix2[row][col],matrix3[row][col];
  printf("enter the elements of first matrix:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  printf("enter the elements of matrix 2:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      matrix3[i][j]=matrix[i][j]+matrix2[i][j];
    }
  }
  printf("Sum of the matrices is:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix3[i][j]);
    }
    printf("\n");
  }
  return 0;
}
