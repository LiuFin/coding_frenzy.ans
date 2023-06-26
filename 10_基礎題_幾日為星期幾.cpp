///假設某月的1號為星期日，請讀入日數，並找出對應的星期數(週日以0表示，週一以1表示，以此類推，至週六以6表示)。
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
