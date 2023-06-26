///讀入一個至多80個字的字串，判斷字串是否為迴文(即由左而右，由右而左，順序相同，大小寫字母視為相異)。
///如果是迴文則輸出YES，如果不是則輸出NO。
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
