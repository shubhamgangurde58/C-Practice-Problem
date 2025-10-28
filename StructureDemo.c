#include<stdio.h>

struct studentInfo{
	
	int rollno;
	char name[50];
	float marks;
	
};

int main(){
	
	struct studentInfo s1;
	
	printf("\nEnter the student Rollno :");
	scanf("%d",&s1.rollno);
	
	printf("\nEnter the student Name :");
	scanf("%s",&s1.name);
	
	printf("\nEnter the student Marks :");
	scanf("%f",&s1.marks);
	
	printf("\n-------Student Details ------\n");
	
	printf("ID     : %d\n", s1.rollno);
    printf("Name   : %s\n", s1.name);
    printf("Marks  : %.2f\n", s1.marks);
	
	return 0;
}