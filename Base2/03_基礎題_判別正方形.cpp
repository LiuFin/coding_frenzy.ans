///撰寫一個程式要求使用者輸入矩形的長與寬，然後讀進這兩個整數。假如長與寬相同則印出訊息「It is a square」，否則印出訊息「It is not a square」。
///只能使用本章所學到的單一if敘述式。
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b) printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}
