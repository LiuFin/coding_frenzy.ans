///�g�@�}�C�j�p��6�A�̧ǿ�J�}�C�����A�p��}�C�����̤j�ȻP�̤p�Ȫ��t�Z
#include <stdio.h>
int main()
{
	int a,c=0,b=9999;
	while(scanf("%d",&a)==1){
		if(a>c)c=a;
		if(a<b)b=a;
	}

	printf("%d",c-b);
}
