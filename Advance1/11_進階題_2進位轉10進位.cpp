///Ū�J�@��0000 ~ 1111��2�i����(�T�w4���)�A����ܥX������10�i��Ʀr�C
///�Ʀr�d��G0000 �V 1111
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b=0,i=0,sum=0;
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		a/=10;
		sum+=b*pow(2,i);
		i++;
	}
	printf("%d\n",sum);
}
