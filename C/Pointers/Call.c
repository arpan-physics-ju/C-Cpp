// Call by value 
// Call by reference
#include<stdio.h>

//Call by Reference

void _sq(int* n);

int main(){
    int number = 200;

    _sq (&number);
    
    return 0;
}

void _sq(int* n){
    *n = (*n) * (*n);
    printf("%d\n",*n);
}

