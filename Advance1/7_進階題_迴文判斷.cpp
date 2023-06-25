///題目內容：從鍵盤讀入1個4位數的整數(1000-9999)。
///如果該數字構成廻文(即由左而右，由右而左，順序相同)，則顯示YES。如果該數字未構成廻文，則顯示NO。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n/1000==n%10&&n/100%10==n%100/10)printf("YES\n");
	else printf("NO\n");
}
