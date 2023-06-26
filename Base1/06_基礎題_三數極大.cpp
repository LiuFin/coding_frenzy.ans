///輸入三個正整數，輸出其最大值。
///數字範圍：整數1 – 100
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
