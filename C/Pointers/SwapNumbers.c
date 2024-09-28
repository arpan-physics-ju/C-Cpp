#include<stdio.h>


void swap(int* x, int* y);

int main(){
    int a = 5;
    int b = 3;
    swap(&a,&b);
    printf("x=%d,y=%d",a,b);
    
    return 0;
}

void swap(int* x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
    printf("x=%d,y=%d",*x,*y);
}