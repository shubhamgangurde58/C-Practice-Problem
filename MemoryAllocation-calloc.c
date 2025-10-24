#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    
    int *arr = calloc(n, sizeof *arr); // allocates and sets memory to 0
    
    if (arr == NULL) {
        perror("calloc");
        return 1;
    }

    printf("Array after calloc (should be zeros): ");
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");

    // now set values
    for (int i = 0; i < n; ++i) arr[i] = i + 1;

    printf("Array after assigning values: ");
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
