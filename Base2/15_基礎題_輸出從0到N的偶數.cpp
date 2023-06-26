///輸入一正整數Ｎ後，利用迴圈概念輸出所有0～N內的偶數
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(i%2==0) printf("%d ",i);
	}
}
