///��J�@�Ӿ��N�A�A�̧ǿ�JN�Ӿ�Ƹm��}�C���A�p��U����������ȡA�A�C�X����X����ȫ᪺�}�C�C
///�Ʀr�d��G���N�d�� 1 �V 10�F��L���1 �V 100
#include <stdio.h>
int main()
{
	int n,a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i]*=a[i];
	}
	for(int i=0;i<n;i++)printf("%d,",a[i]);
	printf("\n");
}
