///�D�ؤ��e�G�Эp��11+22+33+�K+nn���ȡC�Ʀr�d��G���1-9�C
#include <stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i*11;
	}
	printf("%d",sum);
}
