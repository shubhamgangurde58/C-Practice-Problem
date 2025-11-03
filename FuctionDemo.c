#include<stdio.h>
int add(int,int);
int sub(int,int);

int main(){
	
	int m = 10;
	int n = 20;
	
	int a = add(m,n);
	printf("\nAddition = %d",a);
	
	
	int b = sub(m,n);
	printf("\nSubtraction = %d",b);
	
	return 0;
}

int add(int x,int y){
	
	return x+y;
}

int sub(int x, int y){
	return x-y;
}