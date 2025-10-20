#include<stdio.h>
#include<conio.h>
int main(){
	
	//	Arithmatic Operator 
	
	// +  addition
	// -  subtraction
	// *  multipication
	// \  Division
	// %  modules
	
	
	int a ;
	int b ;
	
	printf("Enter the First No :");
	scanf("%d",&a);
	
	printf("Enter the Second No :");
	scanf("%d",&b);
	
	int add = a+b;
	printf("Additon = %d\n",add);
	
	int sub = a-b;
	printf("subtraction = %d\n",sub);
	
	int multi = a*b;
	printf("multipication = %d\n",multi);

	int div = a/b;
	printf("division =%d\n",div);
	
	int mod = a%b;
	printf("Modules =%d\n",mod);	
	
	
	
	return 0;
}