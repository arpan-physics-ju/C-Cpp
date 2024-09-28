/*
getchar	: reads the next input character from a text stream
putchar	: prints a character each time it is called
*/
/*
c = getchar();
putchar(c);
*/
#include<stdio.h>
void main()
{
	int c;
	
	while ((c = getchar()) != EOF) 
	{
		putchar(c);
	}
}

