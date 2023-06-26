///一週有7 天，讀入天數，計算該天數是幾週又幾天。
///數字範圍：整數1 – 365
#include <stdio.h>
int main()
{
	int d;
	scanf("%d",&d);
	printf("%d %d\n",d/7,d%7);
}
