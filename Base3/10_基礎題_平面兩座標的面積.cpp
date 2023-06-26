///題目內容：輸入平面兩點座標的四個整數值(x1,y1,x2,y2)，計算並顯示這兩點所圍之面積。
///(EX.輸入(x1,y1,x2,y2)，計算(x1,y1)、(x1,y2)、(x2,y2)、(x2,y1)所圍面積。) 數字範圍：整數1 –100
#include <stdio.h>
int main()
{
	int a,b,c,d,ans;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	ans=(c-a)*(d-b);
	if(ans<0)ans=-ans;
	printf("%d",ans);
}
