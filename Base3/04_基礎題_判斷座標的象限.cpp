///題目內容：判斷所輸入座標(x,y)的所在象限，(僅考慮在四個象限的情況，不考慮在軸線及原點的情況)。
///{ex.(1,1)屬第一象限、(-1,1)屬第二象限、(-1,-1)屬第三象限、(1,-1)屬第四象限} 數字範圍：整數 -1000~1000
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0){
		if(y>0)printf("1\n");
		else printf("4\n");
	}
	else {
		if(y>0)printf("2\n");
		else printf("3\n");
	}
}
