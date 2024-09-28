#include<stdio.h>
#include<math.h>

void calculateTable(int n);


int main(){
    int n;
    printf("Table of : \t ");
    scanf("%d",&n);
    calculateTable(n);
}

void calculateTable(int n) {
    long* sum = 1;
    for (long i = 1; i <= 100; i++)
    {
        sum = sum * n;
        printf("2 power %lu = %lu \n",i,sum);
    }
}