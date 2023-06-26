# 2-2023_cf.ans
銘傳大學程設會考題庫

# 進階題 1
## 01 反序數字
輸入1個正整數，將該整數所有數字反序排列後組成一個的新整數，計算出兩者相加的結果。
數字範圍：整數 1 – 10000
```cpp
#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=a,s=0;
	while(b){
		s=s*10+b%10;
		b/=10;
	}
	printf("%d+%d=%d\n",a,s,a+s);
}
```
## 02 分式化簡
輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。
數字範圍：整數1 – 10000
```cpp
#include <stdio.h>
int main()
{
	int a,b,c,d,temp;
	scanf("%d%d",&a,&b);
	c=a;
	d=b;
	while(c%=d){
		temp=c;
		c=d;
		d=temp;
	}
	printf("%d %d\n",a/d,b/d);
}
```
## 03 讀入整數反序列印
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。
數字範圍：整數 1 – 1000
```cpp
#include <stdio.h>
int main()
{
	int a[10],i=0,b=1;
	while(b)
	{
		scanf("%d",&b);
		if(b!=0)a[i++]=b;
	}
	while(i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
## 04 大小寫轉換
讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換(大寫轉為小寫，小寫轉為大寫)後輸出。
```cpp
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	while(scanf("%c",&c)==1){
		if(c>='A'&&c<='Z')printf("%c",c+32);
		else if(c>='a'&&c<='z')printf("%c",c-32);
		else printf("%c",c);
	}
}
```
## 05 A的B次方函數
題目名稱：A的B次方函數
題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
數字範圍：整數 1 – 9。
程式限制：不得使用power()函數。不得變更已給定的主程式。
```cpp
/*主程式：
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
*/
#include <stdio.h>
int MYPOWER (int x,int y)
{
	int ans=1;
	for(int i=0;i<y;i++){
		ans=ans*x;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 06 漸增數列相加
輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。
數字範圍：整數1 – 1000
```cpp
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		ans+=i*(i+1);
	}
	printf("%d\n",ans);
}
```
## 07 迴文判斷
題目內容：從鍵盤讀入1個4位數的整數(1000-9999)。
如果該數字構成廻文(即由左而右，由右而左，順序相同)，則顯示YES。如果該數字未構成廻文，則顯示NO。
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n/1000==n%10&&n/100%10==n%100/10)printf("YES\n");
	else printf("NO\n");
}
```
## 08 絕對值函數
題目名稱：絕對值函數。
題目內容：設計一個函數f(n)，會回傳n的絕對值。
數字範圍：整數1 – 10000
程式限制：不得使用abs()函數。不得變更已給定的主程式。
```cpp
/*主程式：
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
*/
#include <stdio.h>
int f (int a)
{
	if(a>0) return a;
	else return -a;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
## 09 函數反序排列數字
設計一個函數f(n)，該函數可以傳回整數n的數字反序排列所組成的整數。
數字範圍：整數 1 – 9999 (不含10的倍數)
```cpp
#include <stdio.h>
int f(int n)
{
	int b=0;
	while(n){
		b=b*10+n%10;
		n/=10;
	}
	return b;
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",f(a));
}
```
## 10 計算陣列的平方值
輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，再列出此算出平方值後的陣列。
數字範圍：整數N範圍 1 – 10；其他整數1 – 100
```cpp
#include <stdio.h>
int main()
{
	int n,a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i]*=a[i];
	}
	for(int i=0;i<n;i++)printf("%d,",a[i]);
	printf("\n");
}
```
## 11 2進位轉10進位
讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。
數字範圍：0000 – 1111
```cpp
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b=0,i=0,sum=0;
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		a/=10;
		sum+=b*pow(2,i);
		i++;
	}
	printf("%d\n",sum);
}
```
## 12 陣列找出現次數
讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，數列至多包含10個整數)
之後再讀入一個正整數，程式可以找出該整數出現在數列中的次數。
數字範圍：正整數 1 – 9
```cpp
#include <stdio.h>
int main()
{
	int a[10],b,i=0,sum=0;
	scanf("%d",&b);
	while(b){
		a[i++]=b;
		scanf("%d",&b);
	}
	scanf("%d",&b);
	for(int j=0;j<i;j++){
		sum+=(a[j]==b);
	}
	printf("%d\n",sum);
}
```
# 基礎題 1
## 01計算幾週與幾天
一週有7 天，讀入天數，計算該天數是幾週又幾天。 
數字範圍：整數1 – 365 
```cpp
#include <stdio.h>
int main()
{
	int d;
	scanf("%d",&d);
	printf("%d %d\n",d/7,d%7);
}
```
## 02 找零錢
假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
數字範圍：整數1 – 1000
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5);
}
```
## 03 N數之和
輸入一個整數N，之後讀入N個整數，請輸出其和。
數字範圍：N=整數1 – 10，其餘整數1 – 100。
```cpp
#include <stdio.h>
int main()
{
	int N,n,ans=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&n);
		ans+=n;
	}
	printf("%d\n",ans);
}
```
## 04 計程車資計算
輸入里程公尺數，輸出應付的車資。計程車資計算方式為：起跳100 元(2000公尺)，續跳5元(每500公尺)。 
數字範圍：整數1 – 100000。 
```cpp
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	if(n<=2000)printf("100\n");
	else{
		m=(n-2000)/500*5+100;
		if((n-2000)%500>0)m+=5;
		printf("%d\n",m);
	}
}
```
## 05 因數個數
輸入一個正整數，顯示所有該正整數因數的個數。 
數字範圍：整數1 – 10000。 
```cpp
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)ans++;
	}
	printf("%d\n",ans);
}
```
## 06 三數極大
輸入三個正整數，輸出其最大值。 
數字範圍：整數1 – 100 
```cpp
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	if(a<b){
		temp=b;
		b=a;
		a=temp;
	}
	printf("%d\n",a);
}
```
## 07 計算商數
輸入兩個整數a，b，輸出a除以b的商。 
數字範圍：整數 1 – 10000 。
```cpp
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```
## 08 兩數間可被5整除的整數
輸入兩個整數，找出兩數之間所有可以被5整除的整數。 
數字範圍：2個整數1 – 10000 
```cpp
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(i%5==0)printf("%d\n",i);
	}
}
```
## 09 整數間最大距整數間最大距離
輸入3個相異整數，找出整數間最大的距離。 
數字範圍：整數1 – 10000 
```cpp
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	printf("%d\n",a-c);
}
```
