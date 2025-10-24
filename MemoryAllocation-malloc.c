#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int *p = (int *)malloc(sizeof(int)); // allocate memory for one int
    
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *p = 42; // store value
    printf("Value stored using malloc: %d\n", *p);
	
    free(p); // always free
    return 0;
}
