///Please write a function MYPOWER(A,B), which can calculate the result of A^B.
///Number range: integers 1 - 9
///Program restriction: the power() function cannot be used. The given main program must not be changed.
/*Main program:
int main(void)
{
int a,b;
scanf("%d%d",&a,&b);
printf("[%d]",MYPOWER(a,b));
return 0;
}
*/
#include <stdio.h>
int MYPOWER(int x,int y)
{
	int ans=1;
	for(int i=0;i<y;i++)
	{
		ans=ans*x;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
