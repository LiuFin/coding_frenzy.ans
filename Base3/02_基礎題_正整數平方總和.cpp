///�D�ؤ��e�G��J�����n�A�i�p��G1*1+2*2+...+n*n ���`�M�����G�C�Ʀr�d��G���1~1000
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)ans+=i*i;
	printf("%d",ans);
}
