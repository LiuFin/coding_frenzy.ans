///請撰寫一個程式計算並印出數個整數的加總。假設以999當成警示值。
#include <stdio.h>
int main()
{
	int a=0,sum=-999;
	while(a!=999){
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);
		sum+=a;
	}
	printf("The total is: %d",sum);
}
