/*
author:-Thomas Cherian
date:- 19-02-25
program:- program to calculate the sum of array elements by passing the array to a function.
*/
#include <stdio.h>
void arrsum(int array[],int size){
   int sum = 0;
   for(int i=0; i<size; i++){
       sum += array[i];
   }
   printf("Sum: %d \n",sum);
}
int main(){
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size); 
   int array[size];
   printf("Enter the %d numbers: ",size);
   for(int i=0; i<size; i++){
       scanf("%d", &array[i]);
   }
   arrsum(array, size);
   return 0;
}
