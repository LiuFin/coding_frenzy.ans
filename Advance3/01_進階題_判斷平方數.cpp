///Ū�J�@��1 �V 1000000���Ʀr�A�P�_�ӼƦr�O�_���Y�Ʀr������ơG�p�G�O�A�h�L�X�ӼƦr�����ӼƦr������ơF�p�G���O�A�h�L�X0�C
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n==i*i){
			printf("%d",i);
			m=1;
		}
	}
	if(m!=1)printf("0");
}
