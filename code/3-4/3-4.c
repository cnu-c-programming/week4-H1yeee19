#include <stdio.h>

void inc(int* x) {
    *x = *x+1;
    printf("%d\n", *x);
}

int main() {
    int x = 3;

    inc (&x);
    inc(NULL);
    return 0;
}
