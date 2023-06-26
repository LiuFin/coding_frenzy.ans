///依序輸入六個整數，輸出六個數的立方值。
#include <stdio.h>
int main(){
	int n;
	for(int i=0;i<6;i++){
		scanf("%d",&n);
		printf("%d\n",n*n*n);
	}
}
