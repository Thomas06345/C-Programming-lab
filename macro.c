/*
author:-Thomas Cherian
date:- 19-02-25
program:- Define a macro for the value of π (PI = 3.14159) and write a program to calculate the area of a circle and a cylinder. Use macros for constant values.
*/
#include <stdio.h>
# define pi 3.14159
int main(){
  int rad,height;
  float area;
    printf("enter the radius of circle\n");
    scanf("%d",&rad);
    area=pi*(rad*rad);
    printf("area = %f\n",area);
     printf("enter the radius of cylinder\n");
    scanf("%d",&rad);
     printf("enter the height of cylinder\n");
    scanf("%d",&height);
    area=2*pi*rad*(rad+height);
    printf("area = %f\n",area); 
  return 0;
}
