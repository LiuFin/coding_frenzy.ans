///��J�@�Ӿ��N�A��X��1��N�������_�ƩM�C
#include <stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1) sum+=i;
	}
	printf("%d",sum);
}
