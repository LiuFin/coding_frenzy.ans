///��J�G��� a b�A��Xa b�̤j���]��
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
