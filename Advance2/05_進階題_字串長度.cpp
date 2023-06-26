///輸入兩個很大的正整數a與 b，如果a>b則輸出 1，如果 a<b則輸出 -1, 如果 a=b 則輸出 0。 (暗示：可用字串輸入，用字串的觀點來比大小。)
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
