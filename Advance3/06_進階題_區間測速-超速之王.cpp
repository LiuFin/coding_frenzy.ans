///�D�ؤ��e�G�t�s�ϸU�ظ�1�q�˳]�϶����t���A����1.2�����A�q�o10�����q�L�����(��J10�Ӿ��)�C
///�п�X�ĴX�����̧֪��A�ç⥦���ɳt�L�X��(�u�L��Ƴ����A�p�Ƴ����L����˥h)�C
///(�ɳt�����O�C�p�ɴX����( km/hour)�C1�p�ɦ�60�����A1������60��A��J���O���) �Ʀr�d��G���1 �V 1000
#include <stdio.h>
int main()
{
	int a[10],fasti=0,speed;
	for(int i=0;i<10;i++)scanf("%d",&a[i]);
	for(int i=1;i<10;i++)if(a[fasti]>a[i])fasti=i;
	speed=60*60*1.2/a[fasti];
	printf("%d %d\n",fasti+1,speed);
}
