#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows in the pattern

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for each element in the row
        for (int j = 0; j <= i; j++) {
            // Print 1 if the sum of row and column indices is even, otherwise print 0
            printf("%d ", (i + j) % 2);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
