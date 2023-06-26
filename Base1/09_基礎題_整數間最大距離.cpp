///輸入3個相異整數，找出整數間最大的距離。
///數字範圍：整數1 – 10000
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
