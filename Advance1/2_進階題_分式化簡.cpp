///輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。
///數字範圍：整數1 – 10000
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
