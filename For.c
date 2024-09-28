#include<stdio.h>


#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */




void main()
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f \n",fahr, (5.0/9.0)*(fahr-32));	
}


/*
The for statement is a loop, a generalization of the while.
Within the parentheses, there are three parts, separated
by semicolons. The first part, the initialization
fahr = 0
is done once, before the loop proper is entered. The second part is the
test or condition that controls the loop:
fahr <= 300
This condition is evaluated; if it is true, the body of the loop (here a single ptintf) is
executed. Then the increment step
fahr = fahr + 20
is executed, and the condition re-evaluated. The loop terminates if the condition has become
false. As with the while, the body of the loop can be a single statement or a group of
statements enclosed in braces. The initialization, condition and increment can be any
expressions.
*/

/*The choice between while and for is arbitrary, based on which seems clearer. The for is
usually appropriate for loops in which the initialization and increment are single statements
and logically related, since it is more compact than while and it keeps the loop control
statements together in one place.*/
