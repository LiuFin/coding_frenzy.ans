///�м��g�@�ӷ|�N�@�s���Ƭۭ����{���C���w�Hscanf��Ū�����Ĥ@�Ӿ�ơA�O�Ω���X���U�ӭn��J���ƭȪ��ӼơC
///�A���{���C����@��scanf�A�����u��Ū���@�ӼƭȡC
///��J�G3 20 50 12�A��X�GEnter the number of values to be processed: Enter a value: Enter a value: Enter a value: Product of the %d values is 12000
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
