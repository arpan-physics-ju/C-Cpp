//A variable that store a memory address of another variable is a Pointer.
/*
int age = 22;
int *ptr = &age; *=value at address, &=address of operator,
int _age = *ptr;
*/
#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int a =*ptr;

    //Address printing      //  Hexadesimal format
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%p\n", &age);
    printf("%p\n", &a);
printf("%d\n", *ptr);
    printf("%p\n", ptr);
    printf("%p\n", age);
    printf("%d\n", a);

    //Address printing      //  undigned int format
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    printf("%u\n", &age);
    printf("%u\n", &a);

    return 0;
}

