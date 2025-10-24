#include<stdio.h>
int main(){
	
	FILE* ptr;
	
	ptr = fopen("ShubhamFile.txt","r");
	
	if(ptr == NULL){
		printf("File Not Found !!");
	}
	else{
		
		for(int i=0;i<10;i++){
			
				printf("%c : %d \n ",getc(ptr),ftell(ptr));
				fseek(ptr,ftell(ptr),0);
				
				if(i == 10)
				rewind(ptr);	
		}
		
	}
	
	fclose(ptr);
	
	return 0;
}