///��J���������l�Τ���(�������i��0)�A�N���²�᪺������X�C
///�Ʀr�d��G���1 �V 10000
#include <stdio.h>
int main()
{
	int a,b,c,d,temp;
	scanf("%d%d",&a,&b);
	c=a;
	d=b;
	while(c%=d){
		temp=c;
		c=d;
		d=temp;
	}
	printf("%d %d\n",a/d,b/d);
}
