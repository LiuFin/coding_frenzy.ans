///Input an integer N, then read in N integers, please output the sum.
///Number range: N=integer 1 to 10, other integers 1 to 100.
#include <stdio.h>
int main()
{
    int N,a,sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d\n",sum);
}
