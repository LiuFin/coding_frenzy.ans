///��J��ӫܤj�������a�P b�A�p�Ga>b�h��X 1�A�p�G a<b�h��X -1, �p�G a=b �h��X 0�C (�t�ܡG�i�Φr���J�A�Φr�ꪺ�[�I�Ӥ�j�p�C)
#include <stdio.h>
#include <string.h>
int main(){
	char line1[100],line2[100];
	scanf("%s%s",line1,line2);
	int N1=strlen(line1);
	int N2=strlen(line2);
	if(N1>N2) printf("1");
	if(N1<N2) printf("-1");
	if(N1==N2){
		if(line1[0]>line2[0]) printf("1");
		if(line1[0]<line2[0]) printf("-1");
		else printf("0");
	}
}
