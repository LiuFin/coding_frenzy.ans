/*�D�ئW�١GA��B������
�D�ؤ��e�G�м��g�@�Ө��MYPOWER(A,B)�A�i�H�p��A^B���G�C
�Ʀr�d��G��� 1 �V 9�C
�{������G���o�ϥ�power()��ơC���o�ܧ�w���w���D�{���C
�D�{���G
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
