#include<stdio.h>
#include<conio.h>
int main(){
	
	int percentage ;
	printf("Enter the Student Percentage :");
	scanf("%d",&percentage);
	
	switch(percentage){
			
			case 90:
				printf("Pass with A+ grade");
				break;
				
			case 80:
				printf("Pass with A grade");
				break;
				
			case 70:		
				printf("Pass with B+ grade");
				break;
				
			case 60 :
				printf("Pass with B grade");
				break;
				
			case 50 :	
				printf("Pass with C grade");
				break;
				
			case 40 :	
				printf("Pass with D grade");
				break;
				
			default :
				printf(" Sorry.. you are Fail !!");
			break;
	}
	
	return 0;
}