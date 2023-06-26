///題目內容：龜山區萬壽路1段裝設區間測速器，長度1.2公里，量得10輛車通過的秒數(輸入10個整數)。
///請輸出第幾輛車最快的，並把它的時速印出來(只印整數部分，小數部分無條件捨去)。
///(時速的單位是每小時幾公里( km/hour)。1小時有60分鐘，1分鐘有60秒，輸入的是秒數) 數字範圍：整數1 – 1000
#include <stdio.h>
int main()
{
	int a[10],fasti=0,speed;
	for(int i=0;i<10;i++)scanf("%d",&a[i]);
	for(int i=1;i<10;i++)if(a[fasti]>a[i])fasti=i;
	speed=60*60*1.2/a[fasti];
	printf("%d %d\n",fasti+1,speed);
}
