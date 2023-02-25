///Input the numerator and denominator of the fraction (the denominator cannot be 0), and output the simplified fraction.
///Number range: Integer 1 to 10000
#include <stdio.h>
int main()
{
	int a,b,c,d,temp;
	scanf("%d%d",&a,&b);
	c=a;
	d=b;
	while(c%=d)
	{
		temp=c;
		c=d;
		d=temp;
	}
	printf("%d %d\n",a/d,b/d);
}
