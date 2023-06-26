///題目內容：輸入一個整數，輸出該整數的最大位的數字。數字範圍：整數 9999 ~ -9999。
///輸入：-357，輸出：3
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0)n=-n;
	while(n){
		if(n/10==0)break;
		else n/=10;
	}
	printf("%d\n",n);
}
