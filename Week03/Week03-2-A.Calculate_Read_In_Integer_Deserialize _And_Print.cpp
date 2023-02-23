///Design a program that can continuously read positive integers, and then display the input positive integers on the screen in reverse order.
///(enter 0 to indicate the end, and no more than 10 positive integers)
///Number range: Integer 1 to 1000
#include <stdio.h>
int main()
{
	int a[10],i=0,b=1;
	while(b)
	{
		scanf("%d",&b);
		if(b!=0)a[i++]=b;
	}
	while(i--){
		printf("%d ",a[i]);

	}
	printf("\n");
}
