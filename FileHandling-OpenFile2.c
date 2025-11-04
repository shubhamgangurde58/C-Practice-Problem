#include<stdio.h>
int main(){
	
	FILE *ptr;
	
	ptr = fopen("StudentInfo.txt","r");
	
	if(ptr != NULL){
		
		printf("File open successfully !!");
				
	}else{
		
		printf(" File Not Found !");
		
	}
	
	fclose(ptr);
	
	return 0;
}