///��J1�ӥ����n�A�@����X�P�P�T�����h��
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int star=i*2-1;
		int space=n-i;
		for(int j=0;j<space;j++) printf(" ");
		for(int k=0;k<star;k++) printf("*");
		printf("\n");
	}
}
