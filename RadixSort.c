#include "RadixSort.h"

/*****************************************************
*  函数名称：BucketSort
*  功能说明：桶排序(升序)
*  参数说明：无
*  函数返回：void
*  修改时间：2018-8-26   已测试
*  数据存储：只能数组
*  附加说明：O(n)
*****************************************************/
int BucketSort(void)
{
	int book[1001], i, j, t, n;
	for(i=0; i<=1000; i++)
		book[i]=0;
	printf("你要输入的数据的个数(数据的值大于0,小于1001)：");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("请输入第%d个数据:", i);
		scanf("%d", &t);
		if(t<=0 || t>=1001)
		{
			printf("输入数据错误,请重新输入!\n");
			return 0;                   //错误
		}
			book[t]++;
	}
	for(i=1; i<=1000; i++)
		for(j=1; j<=book[i]; j++)
			printf("%d  ", i);
	printf("\n");
	return 1;                          //正常
}