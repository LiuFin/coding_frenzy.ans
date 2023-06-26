///輸入兩個整數，找出兩數之間所有可以被5整除的整數。
///數字範圍：2個整數1 – 10000
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(i%5==0)printf("%d\n",i);
	}
}
