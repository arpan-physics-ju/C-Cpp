#include<stdio.h>

int main(){
    int age = 22;
    int old = 23;
    int *ptr = &age;
    int *_ptr = &old;

    printf("%u\t%u diff = %u \n",ptr,_ptr, (ptr + _ptr));
    _ptr =&age;
    printf("comp=%u",ptr == _ptr);
    return 0;
}