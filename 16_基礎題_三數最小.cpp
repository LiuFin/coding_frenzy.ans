///�g�@��k�౵���T�ӥ���ơA�æ^�Ǩ�̤p��
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){temp=a;a=b;b=temp;}
	if(b<c){temp=b;b=c;c=temp;}
	if(a<c){temp=a;a=c;c=temp;}
	printf("%d\n",c);
}
