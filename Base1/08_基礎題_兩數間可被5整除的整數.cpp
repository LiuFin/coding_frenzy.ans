///��J��Ӿ�ơA��X��Ƥ����Ҧ��i�H�Q5�㰣����ơC
///�Ʀr�d��G2�Ӿ��1 �V 10000
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(i%5==0)printf("%d\n",i);
	}
}
