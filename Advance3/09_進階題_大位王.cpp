///�D�ؤ��e�G��J�@�Ӿ�ơA��X�Ӿ�ƪ��̤j�쪺�Ʀr�C�Ʀr�d��G��� 9999 ~ -9999�C
///��J�G-357�A��X�G3
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0)n=-n;
	while(n){
		if(n/10==0)break;
		else n/=10;
	}
	printf("%d\n",n);
}
