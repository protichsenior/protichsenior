#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    for (count = 10; count >= 1; count--) {
        printf("%d", count);
        if (count == 6)
            break;
    }
    printf("...loop bifurcated!\n");

    return 0;
}

