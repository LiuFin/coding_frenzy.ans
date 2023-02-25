///Topic Name: Absolute Value Functions.
///Title content: Design a function f(n), which will return the absolute value of n.
///Number range: Integer 1 to 10000
///Program restriction: the abs() function cannot be used. The given main program must not be changed.
/*
Main program:
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
*/
#include <stdio.h>
int f(int a)
{
	return a>0 ? a:-a;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
