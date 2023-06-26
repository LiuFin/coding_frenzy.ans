///輸入兩個整數，找出兩數之間所有可能被7整除的整數。
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%7==0) printf("%d ",i);
	}
}
