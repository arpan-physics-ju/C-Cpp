// Max size = 10 lack

#include<stdio.h>

#define SIZE 10000000

void array(){
    int largeArray[SIZE];

    for (int i = 1; i <= SIZE; i++){
        largeArray[i] = (i * 10);
    }
    printf("First element: %d \n ", largeArray[1]);
    printf("Last element: %d \n ", largeArray[SIZE]);
}

void main(){
    array();
}