///讀入 1000 - 100000 的數字，找出其千位數的數字
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/1000%10);
}
