#include <stdio.h>

int main() {
	
    int arr[5] = {10, 20, 30, 40, 50};
    
    int *ptr;  
    
    int i;

    ptr = arr; 

    printf("Array elements using pointer:\n");

	printf("\n\n----- Array -------\n\n");
	
    for (i = 0; i < 5; i++) {
    	
        printf("Element %d : %d\n", i + 1, *(ptr + i));
        
    }
    
    printf("\n\n----------------------------\n\n");
    
    printf("\n\n----- Pointer value -------\n\n");
    
    for (i = 0; i < 5; i++) {
    	
        printf("Element %d : %d\n", i + 1, *(ptr + i) );
        *(ptr + i) += 5;
        
    }
    
    printf("\n\n----------------------------\n\n");
    
    printf("\n\n----- After Change the Pointer value -------\n\n");
    
    for (i = 0; i < 5; i++) {
    	
        printf("Element %d : %d\n", i + 1, arr[i]);
        
    }

    return 0;
}
