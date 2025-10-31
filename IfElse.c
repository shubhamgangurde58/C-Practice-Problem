#include<stdio.h>
#include<conio.h>
int main(){
	
	int a ;
	printf("Enter the any no :");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		printf("A is Even");
	}else{
		printf("A is Odd");
	}
	
	return 0;
}