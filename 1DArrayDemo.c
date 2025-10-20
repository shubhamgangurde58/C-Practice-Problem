#include<stdio.h>
int main(){

	int marks[5];
	int i=0;
	
	printf("\n Please enter the marks of 5 Subject :\n");
	for(int i=0;i<5;i++){
		scanf("%d",&marks[i]);	
	}
	
	
	for(int i=0;i<5;i++){
		printf("\n Subject = %d : %d\n",i+1, marks[i]);	
	}
		
	return 0;
}