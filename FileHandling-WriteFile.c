#include <stdio.h>

int main() {
	
    FILE *fp;
    fp = fopen("ShubhamFile.txt", "w"); 

    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    fprintf(fp, "Hello, File Handling in C!\n");
    fputs("C programming is fun!\n", fp);
    fputc('A', fp); 

    printf("Data written to file successfully.\n");

    fclose(fp); 
    return 0;
}
