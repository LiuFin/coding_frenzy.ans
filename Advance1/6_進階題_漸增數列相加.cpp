///��J�����n�A�p��1*2+2*3+3*4+�K+(n-1)*n���M�C
///�Ʀr�d��G���1 �V 1000
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		ans+=i*(i+1);
	}
	printf("%d\n",ans);
}
