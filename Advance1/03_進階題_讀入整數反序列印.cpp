///�]�p�@�ӵ{���A�ӵ{���i�H�s��Ū�J�����(��J0��ܵ����A�ܦh���W�L10�ӥ����)�A����N�ҿ�J������ƥH�ۤϧ���ܦb�e���W�C
///�Ʀr�d��G��� 1 �V 1000
#include <stdio.h>
int main()
{
	int a[10],i=0,b=1;
	while(b)
	{
		scanf("%d",&b);
		if(b!=0)a[i++]=b;
	}
	while(i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
