///�D�ؤ��e�G��J�@�Ӥ��j��20000������ƫ�A�̾ڤU�z�n�D�L�X�䵲�G�C
///��J�G153�A��X�G3 50 100 �C
///��J 1503�A��X�G3 0 50 100 �C
#include <stdio.h>
int a[5]={1,10,100,1000,10000};
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<5;i++){
	if(n<=0)break;
	int now=n%10;
	printf("%d ",now*a[i]);
	n/=10;
	}
	return 0;
}
