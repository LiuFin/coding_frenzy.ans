///Input a positive integer, arrange all the digits of the integer in reverse order to form a new integer, and calculate the result of adding the two.
///Number range: Integer 1 ¡V 10000
#include <stdio.h>
int main()
{
	int a,b=0,t,sum;
	scanf("%d",&a);
	t=a;

	while(t)
	{
		b=b*10+t%10;
		t=t/10;
	}
	sum=a+b;
	printf("%d+%d=%d\n",a,b,sum);
}
