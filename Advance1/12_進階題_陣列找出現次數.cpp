///讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，數列至多包含10個整數)
///之後再讀入一個正整數，程式可以找出該整數出現在數列中的次數。
///數字範圍：正整數 1 – 9
#include <stdio.h>
int main()
{
	int a[10],b,i=0,sum=0;
	scanf("%d",&b);
	while(b){
		a[i++]=b;
		scanf("%d",&b);
	}
	scanf("%d",&b);
	for(int j=0;j<i;j++){
		sum+=(a[j]==b);
	}
	printf("%d\n",sum);
}
