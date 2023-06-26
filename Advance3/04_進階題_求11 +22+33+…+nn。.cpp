///題目內容：請計算11+22+33+…+nn的值。數字範圍：整數1-9。
#include <stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i*11;
	}
	printf("%d",sum);
}
