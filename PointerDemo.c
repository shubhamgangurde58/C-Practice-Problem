#include<stdio.h>

int main(){
	
	int a = 10;
	
	int *ptr;
	
	ptr = &a;
	
	printf("\nValue of a   := %d ", a);
	printf("\nAddress of a := %d ", &a);
	printf("\nPointer ptr  := %d ", ptr);
	printf("\nValue using ptr := %d ",*ptr);
	
	return 0;
}