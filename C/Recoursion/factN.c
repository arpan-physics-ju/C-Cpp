#include<stdio.h>

long fact(int n);

int main(){
    for (int n; n <= 100; n++)
        printf("%d\t%lu \n",n,fact(n));

    return 0;
}

long fact(int n){
    long ans;
    if(n == 0){
        return 1;
    }
    ans = fact(n -1) * n;
    return ans;
}