#include<stdio.h>



int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",*(arr+5));
printf("%d\n",*(arr+3));
    printf("%d\n",*(arr+10));
    printf("%d\n",*(arr+1000));
    printf("%d\n",*(arr+1021));
    printf("%d\n",*(arr+121));
    return 0;
}

