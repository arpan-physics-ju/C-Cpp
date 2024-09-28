#include<stdio.h>


//int arr[10];
//int *ptr = &arr[0];
//int *ptr = arr; 
//Same

int main(){
	int aadhar[3];
	
	
	//Input
	int *p = &aadhar[0];
	for(int i=0; i<=3; i++){
		printf("%d Index :", i);
		scanf("%d", (p+i));
	}
	
	
	//Output
	for(int i=0; i<=3; i++){
		printf("%d Index : %d \n", i, *(p+i));
	} 
	
	
	return 0;
}
