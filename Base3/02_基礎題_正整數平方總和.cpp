///題目內容：輸入正整數n，可計算：1*1+2*2+...+n*n 之總和的結果。數字範圍：整數1~1000
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)ans+=i*i;
	printf("%d",ans);
}
