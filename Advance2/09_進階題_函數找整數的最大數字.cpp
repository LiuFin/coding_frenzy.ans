///�]�p�@�Ө��max_digit(n)�A��X�զ������n�����̤j�Ʀr�A�Ҧp�G183���̤j�Ʀr��8�C
/* �U��C++ �� main ��� ������ �A�U�� C �� main ���
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
