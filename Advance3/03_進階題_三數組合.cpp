///讀入三個 0 - 9 的數字，將其組合成最大的數字，並計算將該數字加1的結果。
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	printf("%d",a*100+b*10+c+1);
}
