///輸入一個整數N，輸出平年中N月的天數。
#include <stdio.h>
int main(){
	int n,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	printf("%d",a[n-1]);
}
