///輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。
///數字範圍：整數1 – 1000
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		ans+=i*(i+1);
	}
	printf("%d\n",ans);
}
