#include<stdio.h>

int main (){
	float fahr, cels;
	float lower, upper, step;
	lower = 0.0;
	upper = 300.0;
	step = 20.0;
	fahr = lower;
	while(fahr <= upper){
		cels = (5.0/9.0)*(fahr-32.0);
		printf("%3.0f\t%6.2f\n",fahr,cels);
		fahr = fahr+step;
		}
}

/*The printf conversion specification %3.0f says that a floating-point number (here fahr) is
to be printed at least three characters wide, with no decimal point and no fraction digits.
%6.2f describes another number (celsius) that is to be printed at least six characters wide,
with 2 digit after the decimal point*/
