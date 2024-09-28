#include<stdio.h>

void doMath(int a, int b, int* sum, int* pro, int* av);
void doMath(int a, int b, int* sum, int* pro, int* av){
    *sum = a + b;
    *pro = a * b;
    *av = (a + b)/2;
}

int main(){
    int a = 5, b = 3;
    int sum, pro, av;
    doMath(a,b,&sum,&pro,&av);
    printf("%d%d%d\n",sum,pro,av);
    return 0;
}