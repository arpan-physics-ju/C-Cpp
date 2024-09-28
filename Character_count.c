#include<stdio.h>

int main(){
    long nc;
    int a;
    nc = 0;
    while ( a = getchar() != EOF){
   if (a != '\n'){
        ++nc;
        }
    printf("%ld\n", nc);
    }
}
