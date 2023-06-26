///輸入一個整數N，之後讀入N個整數，請輸出其和。
///數字範圍：N=整數1 – 10，其餘整數1 – 100。
#include <stdio.h>
int main()
{
	int N,n,ans=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&n);
		ans+=n;
	}
	printf("%d\n",ans);
}
