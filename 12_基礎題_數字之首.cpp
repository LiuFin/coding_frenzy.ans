///輸入一個整數N，請找出這個數字的首位數。
#include <stdio.h>
int main(){
	int n,m;
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		n/=10;
	}
	printf("%d",m);
}
