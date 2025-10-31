#include<stdio.h>
#include<conio.h>
int main(){
	
	int percentage ;
	printf("Enter the Student Percentage :");
	scanf("%d",&percentage);
	
	if(percentage >= 90){
		
		printf("Pass with A+ grade");
		
	}else if(percentage >= 80){
		
		printf("Pass with A grade");
		
	}else if(percentage >= 70){
		
		printf("Pass with B+ grade");
		
	}else if(percentage >= 60){
		
		printf("Pass with B grade");
		
	}else if(percentage >= 50){
		
		printf("Pass with C grade");
		
	}else if(percentage >= 40){
		
		printf("Pass with D grade");
		
	}else{
		printf(" Sorry.. you are Fail !!");
	}
	return 0;
}