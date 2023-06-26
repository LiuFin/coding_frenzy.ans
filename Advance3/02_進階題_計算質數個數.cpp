///從鍵盤讀入2個 2 - 10000的數字，請計算出兩數字間(含兩數字，假設第2個數字較大)，有幾數字是質數。
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
