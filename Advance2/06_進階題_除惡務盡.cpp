///��J�@�Ӧr��A�N�Ҧ��r��2�h�����X�C
#include <stdio.h>
#include <string.h>
int main(){
	char line[100];
	scanf("%s",line);
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(line[i]!='2') printf("%c",line[i]);
	}
	printf("\n");
}
