#include<stdio.h>

struct Student{
	
	int rollNo;
	char name[50];
	float fees;
	
};

int main(){
	
	struct Student s1;
	
	FILE* sptr;
	
	sptr = fopen("StudentInfo.txt","r");
	
	if(sptr == NULL){
		
		printf("ERROR in File Opening ");
	}
	
	printf("\n\n------Student Record From File ---------\n\n");
	
	while(fscanf(sptr," %d %s %f ",&s1.rollNo,s1.name,&s1.fees) == 3){
		
		printf("\nRollNo : %d \nName : %s   \nFees : %f  \n\n",s1.rollNo,s1.name,s1.fees );
	}
	
	fclose(sptr);
	
	return 0;
}