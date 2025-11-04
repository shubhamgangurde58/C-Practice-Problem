#include <stdio.h>

int main() {
	
    FILE *fp; 

    fp = fopen("ShubhamFile.txt", "w");

    if(fp == NULL) {
        printf("Error: Unable to open file.\n");
    } else {
        printf("File opened successfully!\n");
    }

    fclose(fp); 
    return 0;
}
