///�D�ؤ��e�G��J�@�Ӿ��N�A�ᱵN�Ӿ�ơC�бN�oN�ӼƤ����_�ơA�̷ӥX�{���ǤϦV�L�X�C�Ʀr�d��GN�P��ƪ��d�� �� 1 �V 99�C
#include <stdio.h>
int n,a[100],b[100],j;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=j-1;i>=0;i--){
		printf("%d ",b[i]);
	}
}
