///Enter a positive integer to display the number of all factors of the positive integer.
///Number range: Integer 1 - 10000.
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for(int i=n;i>0;i--){
		 if(n%i==0)a++;
	}
	printf("%d\n",a);
}
