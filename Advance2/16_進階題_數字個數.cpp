///設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後顯示所輸入正整數的個數。
#include <stdio.h>
int main(){
	int n,m=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n==0) break;
		m++;
	}
	printf("%d",m);
}
