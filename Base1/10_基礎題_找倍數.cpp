///�s��Ū�J10�Ӿ��(1 �V 1000)�A��X��Ū�J����Ʀ��X�ӬO3�����ơC
///��ƽd��G1 �V 1000
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
