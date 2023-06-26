///連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。
///整數範圍：1 – 1000
#include <stdio.h>
int main()
{
	int n,ans=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n%3==0)ans++;
	}
	printf("%d\n",ans);
}
