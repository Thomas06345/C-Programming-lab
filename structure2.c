#include <stdio.h>
typedef struct{
    int roll_no;
    char name[20];
    float cgpa;
} student;
int main(){
  int num;
  printf("Enter total number of students\n");
  scanf("%d",&num);
  student s[num];
  for(int i=0;i<num;i++){
   printf("\nEnter the name:");
   scanf("%s",s[i].name);
   printf("\nEnter the roll no:");
   scanf("%d",&s[i].roll_no);
   printf("\nEnter the CGPA:");
   scanf("%f",&s[i].cgpa);
  }
  printf("\nThe student details are:");
  for(int i=0;i<num;i++){
    printf("\nStudent name:%s",s[i].name);
    printf("\nroll no:%d",s[i].roll_no);
    printf("\nstudent CGPA:%.2f",s[i].cgpa);
  }
  return 0;
}

