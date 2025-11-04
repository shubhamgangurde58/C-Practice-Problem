#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("ShubhamFile.txt", "r"); 

    if(fp == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    while(fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp); 
    return 0;
}
