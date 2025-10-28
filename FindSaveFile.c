#include <stdio.h>
#include <stdlib.h>

int main() {
    char cwd[200];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current Working Directory: %s\n", cwd);
    } else {
        perror("getcwd() error");
    }
    return 0;
}
