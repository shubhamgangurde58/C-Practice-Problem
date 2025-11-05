#include <stdio.h>


void displayArray(int *arr, int size) {
	
    int i;
    printf("Array elements are:\n");
    
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); 
    }
    
    printf("\n");
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    displayArray(numbers, 5);

    return 0;
}