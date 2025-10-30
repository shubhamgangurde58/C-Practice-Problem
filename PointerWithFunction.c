#include <stdio.h>


void updateValue(int *p) {
    *p = *p + 10;  
}

int main() {
    int num = 20;

    printf("Before function call: %d\n", num);

    updateValue(&num); 

    printf("After function call : %d\n", num);

    return 0;
}
