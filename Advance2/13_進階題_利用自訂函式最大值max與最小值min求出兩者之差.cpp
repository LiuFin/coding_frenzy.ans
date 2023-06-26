///块タ俱计ノㄧΑ耞程籔程块程搭程ぇ畉
/* よC++ main ㄧΑ 单 よ C  main ㄧΑ
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d){
	int max=-99999;
	if(a>max) max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	if(d>max) max=d;
	return max;
}
int min(int a,int b,int c,int d){
	int min=99999;
	if(a<min) min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	if(d<min) min=d;
	return min;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
