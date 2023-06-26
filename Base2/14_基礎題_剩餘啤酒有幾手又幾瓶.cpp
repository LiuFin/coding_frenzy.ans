///假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，試回答共剩幾手啤酒又幾瓶？
#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d %d",(n-(m*6))/6,(n-(m*6))%6);
}
