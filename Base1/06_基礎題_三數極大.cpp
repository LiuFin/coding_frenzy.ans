///��J�T�ӥ���ơA��X��̤j�ȡC
///�Ʀr�d��G���1 �V 100
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	if(a<b){
		temp=b;
		b=a;
		a=temp;
	}
	printf("%d\n",a);
}
