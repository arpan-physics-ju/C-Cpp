#include<stdio.h>

int main (){
	int fahr, cels;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while(fahr <= upper){
		cels = 5*(fahr-32)/9;
		printf("%3d\t%3d\n",fahr,cels);
		fahr = fahr+step;
		}
}
