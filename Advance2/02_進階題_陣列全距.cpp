///寫一陣列大小為6，依序輸入陣列元素，計算陣列元素最大值與最小值的差距
#include <stdio.h>
int main()
{
	int a,c=0,b=9999;
	while(scanf("%d",&a)==1){
		if(a>c)c=a;
		if(a<b)b=a;
	}

	printf("%d",c-b);
}
