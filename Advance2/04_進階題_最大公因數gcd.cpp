///輸入二整數 a b，輸出a b最大公因數
#include <stdio.h>
int gcd(int a,int b){
	if(a==0) return b;
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	printf("The greatest common divisor of %d and %d is %d\n",a,b,gcd(a,b));
}
