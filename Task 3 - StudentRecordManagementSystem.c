#include<stdio.h>
#include <string.h>

struct Student{
	
	int id;
	char name[50];
	float marks;
	
};
int main(){
	
	int n;
	
	printf("\nEnter the number of Student :");
	scanf("%d",&n);
	
	struct Student student[n];
	
	for(int i=0;i<n;i++){
		
		printf("\nEnter the Student id :");
		scanf("%d",&student[i].id);
	
		printf("Enter the Student Name :");
		scanf("%s",&student[i].name);
	
		printf("Enter the Student Marks :");
		scanf("%f",&student[i].marks);
		
		printf("\n---- Next Student ----\n");
	}
	
	
	for(int i=0;i<n;i++){
		
			printf("\n Id : %d \n Name : %s \n Marks : %f\n ",
				student[i].id,student[i].name,student[i].marks);
				
	}	
	
	int choice;
	
    do {
    	
        printf("\n\n--- Menu ---\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by ID\n");
        printf("3. Delete Student by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
					printf("\n--- All Students ---\n");
					   
					for(int i = 0; i < n; i++) {
					    	
					    printf("\nId : %d \nName : %s \nMarks : %.2f\n",
					        student[i].id, student[i].name, student[i].marks);
					
					}
                break;
                
            case 2: {
				    int searchId;
				    	printf("\nEnter Student ID to search: ");
				    	scanf("%d", &searchId);
				
				    	int found = 0; 
				    	for(int i = 0; i < n; i++) {
				       	 if(student[i].id == searchId) {
				            	printf("\nStudent Found:\n");
				            	printf("Id : %d \nName : %s \nMarks : %.2f\n",
				                   student[i].id, student[i].name, student[i].marks);
				           		 found = 1;
				            	break;
				        	}
				    	}
				    	if(!found) {
				       		printf("\nStudent with ID %d not found.\n", searchId);
				    	}
				    break;
				}

            case 3: {
					   int deleteId;
					    printf("\nEnter Student ID to delete: ");
					    scanf("%d", &deleteId);
					
					    int found = 0;
					    for(int i = 0; i < n; i++) {
					        if(student[i].id == deleteId) {
					            found = 1;
					        
					            for(int j = i; j < n - 1; j++) {
					                student[j] = student[j + 1];
					            }
					            n--; 
					            printf("\nStudent with ID %d deleted.\n", deleteId);
					            break;
					        }
					    }
					    if(!found) {
					        printf("\nStudent with ID %d not found.\n", deleteId);
					    }
					    break;
					}
            case 4:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }

    } while(choice != 4);

 	
	return 0;
}