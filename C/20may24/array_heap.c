#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000000

void array() {
    int *largeArray = (int *)malloc(SIZE * sizeof(float));
    
    if (largeArray == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    for (int i = 1; i <= SIZE; i++) {
        largeArray[i] = (i * 5);
    }
    printf("First element: %d\n", largeArray[1]);
    printf("Last element: %d\n", largeArray[SIZE]);
    free(largeArray);
}
int main() {
    array();
    return 0;
}
