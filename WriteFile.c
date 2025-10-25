#include<stdio.h>
int main(){
	
	FILE *ptr = NULL;
	
	ptr = fopen("ShubhamFile.txt","w");
	
	fputc('A',ptr);
	fputs("My Name is shubham Roll No is 19",ptr);
	
	fclose(ptr);
	
	return 0;
}