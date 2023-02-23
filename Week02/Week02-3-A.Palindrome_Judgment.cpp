///Read a 4-digit integer (1000-9999) from the keyboard.
///If the number from left to right, from right to left, in the same order, then display "YES"
///If the number does not, display "NO"
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n/1000==n%10&&n/100%10==n/10%10)printf("YES\n");
	else printf("NO\n");
}
