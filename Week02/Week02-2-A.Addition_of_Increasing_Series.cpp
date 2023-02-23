///Input a positive integer n to calculate the sum of 1*2+2*3+3*4+¡K+(n-1)*n.
///Number range: Integer 1 to 1000
#include <stdio.h>
int main()
{
	int a=0,n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		a+=i*(i+1);
	}
	printf("%d\n",a);
}
