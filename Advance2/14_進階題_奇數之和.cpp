///輸入一個整數N，輸出由1至N中間的奇數和。
#include <stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1) sum+=i;
	}
	printf("%d",sum);
}
