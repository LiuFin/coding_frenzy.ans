///�м��g�@�ӵ{���p��æL�X�ƭӾ�ƪ��[�`�C���]�H999��ĵ�ܭȡC
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
