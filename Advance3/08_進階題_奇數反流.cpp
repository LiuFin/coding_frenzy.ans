///題目內容：輸入一個整數N，後接N個整數。請將這N個數中的奇數，依照出現順序反向印出。數字範圍：N與整數的範圍 為 1 – 99。
#include <stdio.h>
int n,a[100],b[100],j;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=j-1;i>=0;i--){
		printf("%d ",b[i]);
	}
}
