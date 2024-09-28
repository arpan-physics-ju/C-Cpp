#include<stdio.h>

void main(){
    int i;
    int myarray[100];
    int finalarray[100];
    int count = 100;

    for ( i = 1; i <= count; i++)
            myarray[i]=100-i;
    for ( i = 1; i <= count; i++){
        finalarray[i] = myarray[i]+myarray[i];
        printf("%d \t+\t %d \t=\t %d \n",myarray[i],myarray[i],finalarray[i]);
    }
}