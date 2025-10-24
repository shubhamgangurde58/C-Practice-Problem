#include<stdio.h>
#include<conio.h>
int main(){
	
	int a;
	int b;
	int c;
	
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
	scanf("%d",&b);
	printf("Enter the value of C :");
	scanf("%d",&c);
	
	if(a > b){
		
		if(a > c){
			printf("A is Big");
		}else{
			printf("C is Big");
		}
	}else{
		
		if(b > c){
			printf("B is Big");
		}else{
			printf("C is Big");
		}
	}
	
	return 0;
}