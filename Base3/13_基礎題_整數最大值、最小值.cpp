///�D�ؤ��e�G�г]�p�@�ӵ{���A�ӵ{���i����L��J�@�ӥѼƦr�Ҳզ��r��(���ѡG�ťլ۹j�ΫD0�Ʀr)�A�å�0�����C
///�Цb�{�����]�p�@�ӦW��Func�����(��k)�A�Ө�ƥi�����@�Ӧp�W�z���r��ñN�Ӧr�ꤤ�Ҧ�����ƥѤp�Ӥj���s�ƦC�æL�X�p�U�ҭz�����G[�̤p��,�̤j��] �C
///��J�G1 5 4 3 2 0�ɡA��X�G[1,5]
#include <stdio.h>
int main()
{
	int max=-99999,min=99999;
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0) break;
		if(n>max) max=n;
		if(n<min) min=n;
	}
	printf("[%d,%d]",min,max);
}
