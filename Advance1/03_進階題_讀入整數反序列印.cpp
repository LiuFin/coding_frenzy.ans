///設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。
///數字範圍：整數 1 – 1000
#include <stdio.h>
int main(){
	int a[10],n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		n++;
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
