///��J���{���ؼơA��X���I������C�p�{����p��覡���G�_��100 ��(2000����)�A���5��(�C500����)�C
///�Ʀr�d��G���1 �V 100000�C
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	if(n<=2000)printf("100\n");
	else{
		m=(n-2000)/500*5+100;
		if((n-2000)%500>0)m+=5;
		printf("%d\n",m);
	}
}
