///弄1  1000000计耞赣计琌琘计キよ计狦琌玥赣计计キよ计狦ぃ琌玥0
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n==i*i){
			printf("%d",i);
			m=1;
		}
	}
	if(m!=1)printf("0");
}
