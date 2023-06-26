# 2-2023_cf.ans
銘傳大學程設會考題庫

#進階題1
##01
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
