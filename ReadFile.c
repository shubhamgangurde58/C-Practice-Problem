#include<stdio.h>
int main(){
	
	FILE *fptr;
	
	fptr = fopen("ShubhamFile.txt","r");
	
	if(fptr != NULL){
		
		printf("File found Successfully !!");
		
		//char ch;
		
//		while((ch = fgetc(fptr)) != EOF){
//			printf("%c",ch);
//		}
		
		
		char str[10000];
		
		fgets(str,10000,fptr);
		printf("\n%s",str);
		
		
	}else{
		printf("File Not Found !!!");
	}
	
	fclose(fptr);
	return 0;
}