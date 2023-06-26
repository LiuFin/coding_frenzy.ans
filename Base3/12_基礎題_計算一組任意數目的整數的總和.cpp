///題目內容：輸入一組以0為結尾的任意數目的整數(其中只有最後一個整數可以為0)後計算所有輸入的正整數總和(負數不加進總和)。
///輸入：1 2 3 4 5 0，輸出：15
#include <stdio.h>
int main()
{
	int sum=0;
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0) break;
		if(n>0) sum+=n;
	}
	printf("%d",sum);
}
