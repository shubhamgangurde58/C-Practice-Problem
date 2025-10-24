#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int n = 3;
    int *arr = malloc(n * sizeof *arr);
    if (arr == NULL) return 1;

    for (int i = 0; i < n; ++i) arr[i] = i + 1; // 1 2 3

    // expand to 6 elements
    int new_n = 6;
    int *tmp = realloc(arr, new_n * sizeof *arr);
    if (tmp == NULL) {
        // realloc failed: original arr is still valid, so free it
        free(arr);
        perror("realloc");
        return 1;
    }
    arr = tmp;

    // initialize new elements
    for (int i = n; i < new_n; ++i) arr[i] = (i + 1) * 10;

    printf("Array after realloc: ");
    for (int i = 0; i < new_n; ++i) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
