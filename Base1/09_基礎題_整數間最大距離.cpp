///��J3�Ӭ۲���ơA��X��ƶ��̤j���Z���C
///�Ʀr�d��G���1 �V 10000
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
		temp=a;
		a=b;
		b=temp;
	}
	printf("%d\n",a-c);
}
