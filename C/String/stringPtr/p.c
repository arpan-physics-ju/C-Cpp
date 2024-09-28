#include<stdio.h>

int main(){
    char *canChange = "Hello World!";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    return 0;
}

/* 
Pointer is Re-initializable, 
but array is not Re-initializable 

*/