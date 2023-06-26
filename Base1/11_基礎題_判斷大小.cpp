///輸入2個整數，如果第一個數字比第二個數字小；則出輸-1，如果兩個數字相等，則輸出0；如果第一個數字比第二數字大，則出輸1。
///數字範圍：1 – 1000
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)printf("-1\n");
	else if(a==b)printf("0\n");
	else printf("1\n");
}
