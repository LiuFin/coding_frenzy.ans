///寫一方法能接受三個正整數，並回傳其最小值
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){temp=a;a=b;b=temp;}
	if(b<c){temp=b;b=c;c=temp;}
	if(a<c){temp=a;a=c;c=temp;}
	printf("%d\n",c);
}
