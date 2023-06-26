///讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。
///數字範圍：0000 – 1111
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b=0,i=0,sum=0;
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		a/=10;
		sum+=b*pow(2,i);
		i++;
	}
	printf("%d\n",sum);
}
