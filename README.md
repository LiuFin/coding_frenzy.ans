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
```
## 03 讀入整數反序列印
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。
數字範圍：整數 1 – 1000
```cpp
#include <stdio.h>
int main(){
	int a[10],n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		n++;
	}
	for(int i=n-1;i>=0;i--){
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
## 10 找倍數
連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。 
整數範圍：1 – 1000 
```cpp
#include <stdio.h>
int main()
{
	int n,ans=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n%3==0)ans++;
	}
	printf("%d\n",ans);
}
```
## 11 判斷大小
輸入2個整數，如果第一個數字比第二個數字小；則出輸-1，如果兩個數字相等，則輸出0；如果第一個數字比第二數字大，則出輸1。 
數字範圍：1 – 1000 
```cpp
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)printf("-1\n");
	else if(a==b)printf("0\n");
	else printf("1\n");
}
```
## 12 整數轉換為等級
輸入一個整數。
如果所輸入的整數大於或等於90，則輸出A；如果輸入的整數小於90但大於或等於80則輸出B，如果小於80但大於或等於60，則輸出C。
如為其他整數，則輸出F。
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A\n");
	else if(n<90&&n>=80)printf("B\n");
	else if(n<80&&n>=60)printf("C\n");
	else printf("F\n");
}
```
# 進階題 2
## 01 判斷大小
寫一方法能傳入2個整數，如果第一個數字比第二個數字小，則回傳-1;如果兩個數字相等，則回傳0; 如果第一個數字比第二個數字大，則回傳1。印出比較後的結果。 
```cpp
#include <stdio.h>
int f(int a,int b){
	if(a<b) return -1;
	else if(a==b) return 0;
	else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
## 02 陣列全距
寫一陣列大小為6，依序輸入陣列元素，計算陣列元素最大值與最小值的差距
```cpp
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
```
## 03 計算一列整數的總和
請撰寫一個程式計算並印出數個整數的加總。假設以999當成警示值。
```cpp
#include <stdio.h>
int main()
{
	int a=0,sum=-999;
	while(a!=999){
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);
		sum+=a;
	}
	printf("The total is: %d",sum);
}
```
## 04 最大公因數gcd
輸入二整數 a b，輸出a b最大公因數
```cpp
#include <stdio.h>
int gcd(int a,int b){
	if(a==0) return b;
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	printf("The greatest common divisor of %d and %d is %d\n",a,b,gcd(a,b));
}
```
## 05 字串長度
輸入兩個很大的正整數a與 b，如果a>b則輸出 1，如果 a<b則輸出 -1, 如果 a=b 則輸出 0。 (暗示：可用字串輸入，用字串的觀點來比大小。)
```cpp
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
```
## 06 除惡務盡
輸入一個字串，將所有字元2去除後輸出。
```cpp
#include <stdio.h>
#include <string.h>
int main(){
	char line[100];
	scanf("%s",line);
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(line[i]!='2') printf("%c",line[i]);
	}
	printf("\n");
}
```
## 07 擲骰統計
輸入一字串為擲骰的結果，統計1到6點出現的狀況。
```cpp
#include <stdio.h>
#include <string.h>
int main(){
	char line[100];
	int a[10]={0};
	scanf("%s",line);
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(line[i]>='1' && line[i]<='6') a[line[i]-'0']++;
	}
	for(int i=1;i<=6;i++) printf("%d:%d\n",i,a[i]);
}
```
## 08 函數判斷質數
設計一個函數prime(n)，可以判斷n是否為質數：如果是質數則回傳1，否則回傳0。
```cpp
/* 下方 C++ 的 main 函數 等價於 再下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
#include <iostream>
using namespace std;
int prime(int n){
	int bad=0;
	for(int i=2;i<n;i++){
		if(n%i==0) bad=1;
	}
	if(bad==0) return 1;
	if(bad==1) return 0;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
```
## 09 函數找整數的最大數字
設計一個函數max_digit(n)，找出組成正整數n中的最大數字，例如：183的最大數字為8。
```cpp
/* 下方C++ 的 main 函數 等價於 再下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
#include<iostream>
using namespace std;
int max_digit(int n){
	int m,max=-99999;
	while(n!=0){
		m=n%10;
		if(m>max) max=m;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
```
## 10 判斷迴文
讀入一個至多80個字的字串，判斷字串是否為迴文(即由左而右，由右而左，順序相同，大小寫字母視為相異)。如果是迴文則輸出YES，如果不是則輸出NO。
```cpp
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
```
## 11 字串中的數字個數
讀入一個至多80個字的字串，找出字串中有多少個數字。
```cpp
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
```
## 12 星星等腰三角
輸入1個正整數n，作為輸出星星三角的層數
```cpp
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int star=i*2-1;
		int space=n-i;
		for(int j=0;j<space;j++) printf(" ");
		for(int k=0;k<star;k++) printf("*");
		printf("\n");
	}
}
```
## 13 利用自訂函式最大值max與最小值min求出兩者之差
輸入四個正整數後，利用函式判斷最大值與最小值，並輸出最大值減最小值之差
```cpp
/* 下方C++ main 函式 等同於 再下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d){
	int max=-99999;
	if(a>max) max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	if(d>max) max=d;
	return max;
}
int min(int a,int b,int c,int d){
	int min=99999;
	if(a<min) min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	if(d<min) min=d;
	return min;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
```
## 14 奇數之和
輸入一個整數N，輸出由1至N中間的奇數和。
```cpp
#include <stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1) sum+=i;
	}
	printf("%d",sum);
}
```
## 15 兩數間可被7整除的數
輸入兩個整數，找出兩數之間所有可能被7整除的整數。
``` cpp
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%7==0) printf("%d ",i);
	}
}
```
## 16 數字個數
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後顯示所輸入正整數的個數。
```cpp
#include <stdio.h>
int main(){
	int n,m=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n==0) break;
		m++;
	}
	printf("%d",m);
}
```
# 基礎題 2
## 01 計算餘數
輸入兩個整數a b，輸出a除以b的餘數
```cpp
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a%b);
}
```
## 02 計算餘數及列印
撰寫一個程式，要求使用者輸入兩個數字(變數名稱分別為x,y)，再從使用者取得這兩個數字，x為被除數，y為除數，然後印出計算後的餘數(remainder)。 
```cpp
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("The remainder is %d\n",a%b);
}
```
## 03 判別正方形
撰寫一個程式要求使用者輸入矩形的長與寬，然後讀進這兩個整數。假如長與寬相同則印出訊息「It is a square」，否則印出訊息「It is not a square」。
只能使用本章所學到的單一if敘述式。 
```cpp
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b) printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}
```
## 04 分開整數的每個數字
撰寫一個程式，輸入一個五位數的數字，將這個數字分成個別的數字，然後分別印出每個數字，數字中間必須相隔3個空格。
輸入：42139，輸出： 4 2 1 3 9
```cpp
#include <stdio.h>
int main()
{
	char c[5];
	scanf("%s",&c);
	printf("%c   %c   %c   %c   %c",c[0],c[1],c[2],c[3],c[4]);
}
```
## 05 將一連串整數相乘
請撰寫一個會將一連串整數相乘的程式。假定以scanf所讀取的第一個整數，是用於指出接下來要輸入的數值的個數。
你的程式每執行一次scanf，必須只能讀取一個數值。
輸入：3 20 50 12，輸出：Enter the number of values to be processed: Enter a value: Enter a value: Enter a value: Product of the 3 values is 12000
```cpp
#include <stdio.h>
int main(){
	int n,m,sum=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter a value: ");
		scanf("%d",&m);
		sum*=m;
	}
	printf("Product of the %d values is %d",n,sum);
}
```
## 06 我們與惡的距離
輸入一個整數，輸出該整數與2的距離。
```cpp
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",n-2);
}
```
## 07 平年月份的天數
輸入一個整數N，輸出平年中N月的天數。
```cpp
#include <stdio.h>
int main(){
	int n,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	printf("%d",a[n-1]);
}
```
## 08 整數二元四則運算
輸入兩個整數 a 與 b 及其 中間的四則運算子 c，輸出其運算結果。
```cpp
#include <stdio.h>
int main(){
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+') printf("%d",a+b);
	if(c=='-') printf("%d",a-b);
	if(c=='*') printf("%d",a*b);
	if(c=='/') printf("%d",a/b);
}
```
## 09 字元判別
輸入一個字元，若其為大寫字母則輸出U，若其為小寫字母則輸出L，若其為數字則輸出D，若為其他則輸出O。
```cpp
#include <stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>='A' && c<='Z') printf("U");
	else if(c>='a' && c<='z') printf("L");
	else if(c>='0' && c<='9') printf("D");
	else printf("O");
}
```
## 10 幾日為星期幾
假設某月的1號為星期日，請讀入日數，並找出對應的星期數(週日以0表示，週一以1表示，以此類推，至週六以6表示)。
```cpp
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%7==1) printf("0");
	else if(n%7==2) printf("1");
	else if(n%7==3) printf("2");
	else if(n%7==4) printf("3");
	else if(n%7==5) printf("4");
	else if(n%7==6) printf("5");
	else if(n%7==0) printf("6");
}
```
## 11 零錢總額
假設有50元、5元和1元等3種硬幣，請分別輸入三種硬幣的數量(分別讀入50元、5元、1元硬幣的數量)，計算出這些硬幣的總額。
```cpp
#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a*50+b*5+c);
}
```
## 12 數字之首
輸入一個整數N，請找出這個數字的首位數。
```cpp
#include <stdio.h>
int main(){
	int n,m;
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		n/=10;
	}
	printf("%d",m);
}
```
## 13 兩數平方差
讀取兩變數a與b之值，計算出a^2-b^2之值
```cpp
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",(a+b)*(a-b));
}
```
## 14 剩餘啤酒有幾手又幾瓶
假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，試回答共剩幾手啤酒又幾瓶？
```cpp
#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d %d",(n-(m*6))/6,(n-(m*6))%6);
}
```
## 15 輸出從0到N的偶數
輸入一正整數Ｎ後，利用迴圈概念輸出所有0～N內的偶數
```cpp
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(i%2==0) printf("%d ",i);
	}
}
```
## 16 三數最小
寫一方法能接受三個正整數，並回傳其最小值
```cpp
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){temp=a;a=b;b=temp;}
	if(b<c){temp=b;b=c;c=temp;}
	if(a<c){temp=a;a=c;c=temp;}
	printf("%d\n",c);
}
```
## 17 計算立方值
依序輸入六個整數，輸出六個數的立方值。
```cpp
#include <stdio.h>
int main(){
	int n;
	for(int i=0;i<6;i++){
		scanf("%d",&n);
		printf("%d\n",n*n*n);
	}
}
```
# 進階題 3
## 01 
