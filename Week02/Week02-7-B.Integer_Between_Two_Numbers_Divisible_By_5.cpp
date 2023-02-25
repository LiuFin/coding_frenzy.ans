///Enter two integers and find all integers between the two numbers that are divisible by 5.
///Number range: 2 integers 1 to 10000
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
