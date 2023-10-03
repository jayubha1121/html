#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call the swap function, passing the addresses of x and y
    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

