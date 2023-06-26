///砞璸ㄧ计f(n)赣ㄧ计肚俱计n计は逼┮舱Θ俱计
///计絛瞅俱计 1  9999 (ぃ10计)
#include <stdio.h>
int f(int n)
{
	int b=0;
	while(n){
		b=b*10+n%10;
		n/=10;
	}
	return b;
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",f(a));
}
