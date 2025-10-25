#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int n = 2;
    struct Student students[n];

    // Sample data
    students[0].id = 101;
    strcpy(students[0].name, "Shubham");
    students[0].marks = 80.5;

    students[1].id = 102;
    strcpy(students[1].name, "Ravi");
    students[1].marks = 70.0;

    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for(int i=0; i<n; i++) {
        fprintf(fp, "%d %s %.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    fclose(fp);
    printf("Student data written to students.txt successfully.\n");
    return 0;
}
