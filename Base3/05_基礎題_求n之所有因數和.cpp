///輸入n (n>0)， 求 n之所有因數和。{ex. 2之因數為1、2，因數和為因數加總1+2=3}
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)if(n%i==0)ans+=i;
	printf("%d",ans);
}
