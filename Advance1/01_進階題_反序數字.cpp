///��J1�ӥ���ơA�N�Ӿ�ƩҦ��Ʀr�ϧǱƦC��զ��@�Ӫ��s��ơA�p��X��̬ۥ[�����G�C
///�Ʀr�d��G��� 1 �V 10000
#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=a,s=0;
	while(b){
		s=s*10+b%10;
		b/=10;
	}
	printf("%d+%d=%d\n",a,s,a+s);
}
