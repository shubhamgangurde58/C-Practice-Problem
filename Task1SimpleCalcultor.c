#include<stdio.h>
int main(){
	
	printf("\n\n********  IBM Calcultor ********\n\n");
	
	int a;
	int b;
	int operation;
	int choice =1;
	
	while(choice){
		
		printf("\nEnter the two number :");
		scanf("%d%d",&a,&b);
	
		printf("\n 1. Addition \n 2. Subtraction \n 3. Multipication \n 4. Division \n 5. Exit \n Enter the Operation no :");
		scanf("%d",&operation);
		
		switch(operation){
			
			case 1:
				printf("\nAddition =%d ",a+b);
				break;
				
			case 2:
				printf("\nSubtraction =%d ",a-b);
				break;
				
			case 3:
				printf("\nMultiply =%d ",a*b);
				break;
				
			case 4:
				if(b == 0)
					printf("\nError: Cannot divide by zero!");	
				else
					printf("\nDivision =%.2f \n",(float)a/b);	
				break;
				
			default :
				printf("\nWrong.. Input !!! ");
				break;
				
		}
		
			printf("\n\n\nEnter yes/1 no/0 To Continue = ");
			scanf("%d",&choice);
	}
	
	
	return 0;
}