///Ū�J�@�Ӧܦh80�Ӧr���r��A�P�_�r��O�_���j��(�Y�ѥ��ӥk�A�ѥk�ӥ��A���ǬۦP�A�j�p�g�r�������۲�)�C
///�p�G�O�j��h��XYES�A�p�G���O�h��XNO�C
#include <stdio.h>
#include <string.h>
int main(){
	char line[80];
	scanf("%s",line);
	int N=strlen(line);
	int bad=0;
	for(int i=0;i<N;i++){
		if(line[i]!=line[N-i-1]) bad=1;
	}
	if(bad==0) printf("YES");
	else printf("NO");
}
