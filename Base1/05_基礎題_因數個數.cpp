///��J�@�ӥ���ơA��ܩҦ��ӥ���Ʀ]�ƪ��ӼơC
///�Ʀr�d��G���1 �V 10000�C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)ans++;
	}
	printf("%d\n",ans);
}
