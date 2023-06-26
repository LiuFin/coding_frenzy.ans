///砞璸ㄧ计max_digit(n)т舱Θタ俱计nい程计ㄒ183程计8
/* よC++  main ㄧ计 单基 よ C  main ㄧ计
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
