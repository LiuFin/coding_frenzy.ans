///�D�ئW�١G�j�󺥼W�ƦC�`�M���̤p����D�ؤ��e�G��J�@�Ӿ��K�A��X�̤p���N�A�ϱo1+2+3+�K+N ���`�M�j��K�C
///Ex.N=1 , 1=1<=K N=2 , 1+2=3 <=K N=3 , 1+2+3=6 <=k N=4 , 1+2+3+4=10 <=K N=5 , 1+2+3+4+5=15 > K �Ʀr�d��G���K�d�� 10-1000
///��J�G10�A��X�G5
#include <stdio.h>
int sum(int N)
{
	int ans=0;
	for(int i=1;i<=N;i++){
		ans+=i;
	}
	return ans;
}
int main()
{
	int K;
	scanf("%d",&K);
	int ans=0;
	for(int N=1;N<=100;N++){
		if(sum(N)>K){
			ans=N;
			break;
		}
	}
	printf("%d",ans);
}
