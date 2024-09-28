//  Author: ARPAN PURKAIT
//  Date:   20may2024
#include<stdio.h>

#define SIZE 10000000

void array(){
    static int largeArray[SIZE];
    for (int i = 1; i <= SIZE; i++){
        largeArray[i] = (i * 5);
    }
    printf("First Element: %d \n", largeArray[1]);
    printf("Last Element: %d \n", largeArray[SIZE]);
}

void main(){
    array();
}                                              
