///��J�@�r�ꬰ�Y�몺���G�A�έp1��6�I�X�{�����p�C
#include <stdio.h>
#include <string.h>
int main(){
	char line[100];
	int a[10]={0};
	scanf("%s",line);
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(line[i]>='1' && line[i]<='6') a[line[i]-'0']++;
	}
	for(int i=1;i<=6;i++) printf("%d:%d\n",i,a[i]);
}
