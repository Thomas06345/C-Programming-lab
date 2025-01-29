#include <stdio.h>
int main() {
  int num1,num2;
  char operation;
  printf("Enter any two numbers\n ");
  scanf("%d%d",&num1,&num2);
  printf("what do you want to do +,-,*,/,%% \n");
  scanf(" %c", &operation);
  switch(operation){
    case '+': printf("\nsum=%d",num1+num2);
      break;
    case '-': printf("\ndifference=%d",num1-num2);
      break;
    case '*' : printf("\nproduct=%d",num1*num2);
      break;
    case '/' : printf("\ndivision=%d",num1/num2);
      break;
    case '%' : printf("\nreminder=%d",num1%num2);
      break;
    default : printf("invalid operation");
      break;
  
  
  
  }
  return 0;
}
