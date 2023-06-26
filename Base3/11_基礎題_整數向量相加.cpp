///題目內容：輸入一個整數N，再依序讀入兩筆各有N個整數的向量，輸出此兩筆向量和。數字範圍：整數N範圍 1–10；其他整數1–100
/*
輸入：
3
1 2 3
4 5 6
輸出：5 7 9
*/
#include <stdio.h>
int main()
{
	int n,a[10],b[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		a[i]+=b[i];
	}
	for(int i=0;i<n;i++)printf("%d ",a[i]);
}
