int *p = malloc(...);
if (p) {
    // use p
    free(p);
    p = NULL;
}
