///There are 7 days in a week, read in the number of days, and calculate the number of days as weeks and days.
///Number range: Integer 1 to 365
#include <stdio.h>
int main()
{
	int w,d;
	scanf("%d",&d);
	w=d/7;
	d=d%7;
	printf("%d %d\n",w,d);
}
