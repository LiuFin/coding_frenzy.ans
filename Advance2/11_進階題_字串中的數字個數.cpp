///Ū�J�@�Ӧܦh80�Ӧr���r��A��X�r�ꤤ���h�֭ӼƦr�C
#include <stdio.h>
#include <string.h>
int main(){
	char line[80];
	int sum=0;
	scanf("%s",line);
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(line[i]>='0' && line[i]<='9') sum++;
	}
	printf("%d\n",sum);
}
