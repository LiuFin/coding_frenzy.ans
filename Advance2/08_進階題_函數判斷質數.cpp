///�]�p�@�Ө��prime(n)�A�i�H�P�_n�O�_����ơG�p�G�O��ƫh�^��1�A�_�h�^��0�C
/* �U�� C++ �� main ��� ������ �A�U�� C �� main ���
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
#include <iostream>
using namespace std;
int prime(int n){
	int bad=0;
	for(int i=2;i<n;i++){
		if(n%i==0) bad=1;
	}
	if(bad==0) return 1;
	if(bad==1) return 0;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
