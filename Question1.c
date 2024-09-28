#include<stdio.h>

int main(){
    int *p;
    int x;

    p = &x;
    *p = 0;

    printf("%d\n",x);
    printf("%d\n",*p);

    *p += 5;

    printf("%d\n",x);
    printf("%d\n",*p);

    (*p)++;
    printf("%d\n",x);
    printf("%d\n",*p);

    return 0;
}