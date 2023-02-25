///Read in a string (up to 10 characters)
///Convert uppercase and lowercase English letters in the string (uppercase to lowercase, lowercase to uppercase) and then output.
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	while(scanf("%c",&c)==1)
	{
		if(c>='A'&&c<='Z')printf("%c",c+32);
		else if(c>='a'&&c<='z')printf("%c",c-32);
		else printf("%c",c);
	}
}

