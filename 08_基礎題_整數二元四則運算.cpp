///��J��Ӿ�� a �P b �Ψ� �������|�h�B��l c�A��X��B�⵲�G�C
#include <stdio.h>
int main(){
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+') printf("%d",a+b);
	if(c=='-') printf("%d",a-b);
	if(c=='*') printf("%d",a*b);
	if(c=='/') printf("%d",a/b);
}
