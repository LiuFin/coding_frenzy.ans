///Ū�J�T�� 0 - 9 ���Ʀr�A�N��զX���̤j���Ʀr�A�íp��N�ӼƦr�[1�����G�C
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	printf("%d",a*100+b*10+c+1);
}
