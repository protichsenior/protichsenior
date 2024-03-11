#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sum = 0;

    while (sum <= 50) {
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        sum = 0;

        for (int integer = 2; integer <= num; integer += 2) {
            sum += integer;
            if (sum >= 50) {
                break;
            }
        }

        if (sum >= 50) {
            break;
        }

        printf("Sum of even numbers from 1 to %d: %d\n", num, sum);
    }

    printf("Sum of even numbers from 1 to %d exceeds 50: %d\n", num, sum);

    return 0;
}