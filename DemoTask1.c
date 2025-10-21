#include<stdio.h>

struct Student{
	
	int rollNo;
	char name[50];
	float fees;
	
};

int main(){
	
	
	int n;
	printf("\nEnter the Total Student :");
	scanf("%d",&n);
	
	struct Student s1[n];

	printf("\n\t------Enter Student Information -----\n");
	
	for(int i=0;i<n;i++){
		
		
		printf("Enter the Student rollNo : ");
		scanf("%d",&s1[i].rollNo);
		
		printf("Enter the Student Name : ");
		scanf("%s",&s1[i].name);
		
		printf("Enter the Student Fees : ");
		scanf("%f",&s1[i].fees);
		
		printf("\n\n Next Student \n\n");
		
	}
	
	FILE* sptr;
	
	sptr = fopen("StudentInfo.txt","w");
	
	if(sptr == NULL){
		printf("\nError !! File not Open ");
		return 1;
	}
	
	for(int i=0;i<n;i++){
		
		fprintf(sptr," %d  %s %f\n",s1[i].rollNo,s1[i].name,s1[i].fees);
		
	}
	
	fclose(sptr);
	
	printf("\n\nStudent Record Store in StudentInfo.txt Successfully !!\n\n");
	
	return 0;
}