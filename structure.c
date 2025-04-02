#include <stdio.h>
typedef struct{
    int roll_no;
    char name[20];
    float cgpa;
} student;
int main(){
  student s1;
  printf("\nEnter the name:");
  scanf("%s",s1.name);
  printf("\nEnter the roll no:");
  scanf("%d",&s1.roll_no);
  printf("\nEnter the CGPA:");
  scanf("%f",&s1.cgpa);
  printf("\nThe student details are:");
  printf("\nStudent name:%s",s1.name);
  printf("\nroll no:%d",s1.roll_no);
  printf("\nstudent CGPA:%.2f",s1.cgpa);

  return 0;
}

