///Ū�J�@�Ӧr��(�ܦh10�Ӧr��)�A�N�r�ꤤ���j�p�g�^��r���ۤ��ഫ(�j�g�ର�p�g�A�p�g�ର�j�g)���X�C
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	while(scanf("%c",&c)==1){
		if(c>='A'&&c<='Z')printf("%c",c+32);
		else if(c>='a'&&c<='z')printf("%c",c-32);
		else printf("%c",c);
	}
}
