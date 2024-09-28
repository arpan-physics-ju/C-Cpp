#include<stdio.h>



int main(){
    int n = 10000;

    long fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%lu\t",fib[0]);
    printf("%lu\t",fib[1]);
    for (int i = 2; i < n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%lu\n",fib[i]);
    }
    
    return 0;
}