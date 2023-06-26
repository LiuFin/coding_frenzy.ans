///請撰寫一個會將一連串整數相乘的程式。假定以scanf所讀取的第一個整數，是用於指出接下來要輸入的數值的個數。
///你的程式每執行一次scanf，必須只能讀取一個數值。
///輸入：3 20 50 12，輸出：Enter the number of values to be processed: Enter a value: Enter a value: Enter a value: Product of the %d values is 12000
#include <stdio.h>
int main(){
	int n,m,sum=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter a value: ");
		scanf("%d",&m);
		sum*=m;
	}
	printf("Product of the %d values is %d",n,sum);
}
