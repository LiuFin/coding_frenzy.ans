///�q��LŪ�J2�� 2 - 10000���Ʀr�A�Эp��X��Ʀr��(�t��Ʀr�A���]��2�ӼƦr���j)�A���X�Ʀr�O��ơC
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		int bad=0;
		for(int j=2;j<i;j++){
			if(i%j==0)bad++;
		}
		if(bad==0)ans++;
	}
	printf("%d\n",ans);
}
