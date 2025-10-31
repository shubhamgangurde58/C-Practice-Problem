#include<stdio.h>

struct Student{
	
	int rollNo;
	char name[50];
	float fees;
	
};

void addStudent(const char *fname){
	
	struct Student s1;
	
	FILE* ptr;
	ptr = fopen(fname,"a");
	
	if(ptr == NULL){
		printf("Error in file Opening");
	}
	
	printf("\n\n-- Enter the Student Record --\n\n");
	
	printf("\nEnter Student RollNo :");
	scanf("%d",&s1.rollNo);
	
	printf("\nEnter Student Name :");
	scanf("%s",&s1.name);
	
	printf("\nEnter Student Fees :");
	scanf("%f",&s1.fees);
	
	fprintf(ptr," %d %s %f\n\n",s1.rollNo,s1.name,s1.fees);
	
	fclose(ptr);
	
	printf("\n\nStudent Record Store in File Successfully !!\n\n");
	
}
 
 void viewAllStudent(const char *fname){
 	
 	FILE* ptr;
 	struct Student s1;
 	
 	ptr = fopen(fname,"r");
 	
 	printf("\n\n------ Display All Student ------\n\n");
 	
 	if(ptr == NULL){
 		printf("Error in File Opening ");
	 }
	 
	 int found = 0;
	 int count = 0;
	 
	 while(fscanf(ptr,"\n %d  %s  %f \n",&s1.rollNo,s1.name,&s1.fees) == 3){
	 	
		 printf("\n RollNo : %d\n Name : %s\n Fees : %f\n",s1.rollNo,s1.name,s1.fees);
	 
	 	found = 1;
	 	
	 	count++;
	 }
	 
	  if (!found){
	  	
	  		 printf("No records in file.\n");
		}else{
			printf("\nTotal records: %d\n", count);
		}
		
	 fclose(ptr);
 	
 }
 
 void deleteStudentByRollNo(const char *filename) {
 	
    struct Student s;
    FILE *fp = fopen(filename, "r");
    FILE *temp = fopen("Temp.txt", "w");
    int id, found = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("Enter Roll No to delete: ");
    scanf("%d", &id);

    // Copy all records except the one to delete
    while (fscanf(fp, "%d %49s %f", &s.rollNo, s.name, &s.fees) == 3) {
        if (s.rollNo != id)
            fprintf(temp, "%d %s %.2f\n", s.rollNo, s.name, s.fees);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);

    // Replace old file with new one
    remove(filename);
    rename("Temp.txt", filename);

    if (found)
        printf("Record with Roll No %d deleted successfully!\n", id);
    else
        printf("Record not found!\n");
}


int main(){

	printf("\n\n******* Welcome to Student Record Management *******\n\n");
	
	const char *fileName="StudentInfo.txt";
	
	int choice;
	
	do{
			printf("\n -- Menu --\n");
			printf("\n1. Add Student  \n2. View All Student \n3. Delete Student \n4. Exit ");
			printf("\n\n Enter your Choice :");
			scanf("\n%d",&choice);
			
			switch(choice){
				case 1:
					addStudent(fileName);
					break;
				case 2:
					viewAllStudent(fileName);
					break;
				case 3:
					deleteStudentByRollNo(fileName);
					break;
				case 4:
					printf("Exited ...");
					break;
				default:
					printf("Invalide choice :\n");
			}
			
				
		}while(choice != 4);

	return 0;
}