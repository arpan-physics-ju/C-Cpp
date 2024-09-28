#include<stdio.h>

void printNumbers(int arr[], int n);


int main (){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i < n; i++){
	    scanf("%d",&arr[i]);
	}
	printNumbers(arr,n);
    return 0;
}

void printNumbers(int arr[], int n){
    for(int i = 0; i < n; i++){ 
            printf("%d \t ", arr[i]); 
    }
    printf("\n");
}
