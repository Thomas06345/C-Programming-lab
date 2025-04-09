/***************************************************************************************************
author:Thomas Cherian
Date:9-4-25
program:program to read a file and count no of words no of lines and number of characters in it 
***************************************************************************************************/
#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    fp = fopen("counter.txt", "r");            // change file name accordingly.
    while (fscanf(fp,"%c",&ch)==1) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '.') {
            words++;
        }
    }
    printf("Words: %d\n", words+1);
    printf("Characters: %d\n", characters);
    printf("Lines: %d\n", lines);
    fclose(fp);
    return 0;
}
