#include<stdio.h>

long power(int ,int );
void main(){
    int i;
    for (i = 1; i < 100; i++){
        printf("%d \t %lu \n",i,power(2,i));
    }
}

long power(int base, int power){
    int i;
    int p = 1;
    for (i = 1; i <= power; i++)
        p = p * base;
    return p;
}