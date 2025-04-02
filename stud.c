#include <stdio.h>
struct Student {
    char name[50];
    int roll_number;
    float marks[3];
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    float subject_totals[3] = {0};
    for (int i = 0; i < n; i++) {
        printf("\nEnter name (without spaces): ");
        scanf("%s", students[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter marks for 3 subjects: ");
        float total = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
            total += students[i].marks[j];
            subject_totals[j] += students[i].marks[j];
        }
        float average = total / 3;
        printf("Total Marks: %.2f, Average Marks: %.2f\n", total, average);
    }
    printf("\nAverage marks for each subject:\n");
    for (int j = 0; j < 3; j++) {
        printf("Subject %d average: %.2f\n", j + 1, subject_totals[j] / n);
    }
    return 0;
}

