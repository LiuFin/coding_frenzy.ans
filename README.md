# 2-2023_cf.ans
銘傳大學程設會考題庫

# 進階題1
## 01
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
# 進階題2
## 02
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
# 進階題3
## 03
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
# 進階題4
## 04
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
# 進階題5
## 05
題目名稱：A的B次方函數
題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
數字範圍：整數 1 – 9。
程式限制：不得使用power()函數。不得變更已給定的主程式。
主程式：
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```cpp
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
