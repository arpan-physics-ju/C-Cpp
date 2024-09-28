#include<stdio.h>

void printJU(int n);

int main(){
    int n = 10;
    printJU(n);
}

//Recursion function
void printJU(int n){
    if (n == 0)
    return;
    printf("Hello, Jadavpur University! \n");
    printJU(n - 1);
}