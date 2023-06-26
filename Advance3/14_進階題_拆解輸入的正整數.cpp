///題目內容：輸入一個不大於20000的正整數後，依據下述要求印出其結果。
///輸入：153，輸出：3 50 100 。
///輸入 1503，輸出：3 0 50 100 。
#include <stdio.h>
int a[5]={1,10,100,1000,10000};
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<5;i++){
	if(n<=0)break;
	int now=n%10;
	printf("%d ",now*a[i]);
	n/=10;
	}
	return 0;
}
