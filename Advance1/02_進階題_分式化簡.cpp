///輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。
///數字範圍：整數1 – 10000
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i>=1;i--){
		if(a%i==0 && b%i==0){
			a=a/i;
			b=b/i;
		}
	}
	printf("%d %d\n",a,b);
}
