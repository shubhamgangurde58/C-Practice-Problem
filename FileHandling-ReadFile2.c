#include<stdio.h>
int main(){
	
	FILE *ptr;
	
	ptr = fopen("StudentInfo.txt","r");
	
	if(ptr != NULL){
		
		printf("File open successfully !!");
		
		//char ch = fgetc(ptr)  reading the single character from file like A;
		//printf("%c",ch);      printing that character
		
		char ch;
		
		while((ch = fgetc(ptr)) != EOF){
			
			printf("%c",ch);		//reading the char one by one like string and print using while loop 
			
		}
				
	}else{
		
		printf(" File Not Found !");
		
	}
	
	fclose(ptr);
	
	return 0;
}