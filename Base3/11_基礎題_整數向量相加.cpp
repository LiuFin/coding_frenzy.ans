///�D�ؤ��e�G��J�@�Ӿ��N�A�A�̧�Ū�J�ⵧ�U��N�Ӿ�ƪ��V�q�A��X���ⵧ�V�q�M�C�Ʀr�d��G���N�d�� 1�V10�F��L���1�V100
/*
��J�G
3
1 2 3
4 5 6
��X�G5 7 9
*/
#include <stdio.h>
int main()
{
	int n,a[10],b[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		a[i]+=b[i];
	}
	for(int i=0;i<n;i++)printf("%d ",a[i]);
}
