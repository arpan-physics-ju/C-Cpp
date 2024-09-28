/*
        Reverse array
*/


#include<stdio.h>



int main(){


    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int firstVal;
    int secondVal;
    for (int i = 0; i < (n/2); i++){
        firstVal = arr[i];
        secondVal = arr[n - i -1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
    
    for (int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
    

    return 0;
}

