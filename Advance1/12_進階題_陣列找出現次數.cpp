///Ū�J�@�ӥ���ƪ��ƦC(�v�@��J����ơA��J0��ܵ����A�ƦC�ܦh�]�t10�Ӿ��)
///����AŪ�J�@�ӥ���ơA�{���i�H��X�Ӿ�ƥX�{�b�ƦC�������ơC
///�Ʀr�d��G����� 1 �V 9
#include <stdio.h>
int main()
{
	int a[10],b,i=0,sum=0;
	scanf("%d",&b);
	while(b){
		a[i++]=b;
		scanf("%d",&b);
	}
	scanf("%d",&b);
	for(int j=0;j<i;j++){
		sum+=(a[j]==b);
	}
	printf("%d\n",sum);
}
