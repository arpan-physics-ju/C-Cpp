// int **pptr;


#include<stdio.h>

int main(){
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;


    printf("%f\n",**pptr);
printf("%u\n",&price);
printf("%u\n",&ptr);
printf("%u\n",&pptr);

    return 0;
}
