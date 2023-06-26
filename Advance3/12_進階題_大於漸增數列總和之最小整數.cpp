///題目名稱：大於漸增數列總和之最小整數題目內容：輸入一個整數K，找出最小整數N，使得1+2+3+…+N 的總和大於K。
///Ex.N=1 , 1=1<=K N=2 , 1+2=3 <=K N=3 , 1+2+3=6 <=k N=4 , 1+2+3+4=10 <=K N=5 , 1+2+3+4+5=15 > K 數字範圍：整數K範圍 10-1000
///輸入：10，輸出：5
#include <stdio.h>
int sum(int N)
{
	int ans=0;
	for(int i=1;i<=N;i++){
		ans+=i;
	}
	return ans;
}
int main()
{
	int K;
	scanf("%d",&K);
	int ans=0;
	for(int N=1;N<=100;N++){
		if(sum(N)>K){
			ans=N;
			break;
		}
	}
	printf("%d",ans);
}
