///Assuming there are 3 kinds of coins such as 50 yuan, 5 yuan and 1 yuan, please enter an amount and display the minimum combination of coins required to equal the amount.
///Number range: Integer 1 to 1000
#include <stdio.h>
int main()
{
	int m,a,b,c;
	scanf("%d",&m);
	a=m/50;
	b=(m-(50*a))/5;
	c=m-(50*a)-(5*b);
	printf("%d=50*%d+5*%d+1*%d\n",m,a,b,c);
}
