#include<stdio.h>
int main(){
	
	FILE *ptr;
	
	ptr = fopen("Shubhamfile.txt","a");
	
	if(ptr != NULL){
		printf("File Open successfully !!");
		
		fputs("\n My Roll No is 19",ptr);
		
	}else{
		printf("File Not found !!");
	}
	
	fclose(ptr);
	
	return 0;
}