///Enter 3 distinct integers and find the largest distance between the integers.
///Number range: Integer 1 ¡V 10000
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}

	printf("%d\n",c-a);
}
