#include "MergeSort.h"

/*****************************************************
*  函数名称：Qsort
*  功能说明：归并排序(升序)
*  参数说明：SR[]为要拆分的数组
			 TR1[]为已排序完成的数组
			 s,t为所选归并排序范围
*  函数返回：void
*  修改时间：2018-8-26   已测试
*  数据存储：只能数组
*  附加说明：稳定的,O(nlog2n),额外空间O(n)
*****************************************************/
void Msort(int SR[], int TR1[], int s, int t)    //将SR[s..t]归并排序为TR1[s..t]
{
	int m;
	int TR2[MAX];
	if(s == t) 
		TR1[s] = SR[s];
	else
	{ 
		m = (s + t) / 2;
		Msort (SR, TR2, s, m);
		Msort (SR, TR2, m+1, t);
		Merge (TR2, TR1, s, m, t);
	}
}

void Merge(int SR[ ], int TR[ ], int s, int m, int t)     //将有序的序列SR[ s..m]和SR[m+1..t]归并为有序的序列TR[ s..t]
{
	int i, j, k;
	for(i = s, j = m + 1, k = s; i <= m && j <= t; ++k)
	{ 
		if(SR[i] <= SR[j])
			TR[k] = SR[i++];
		else 
			TR[k] = SR[j++];
	}
	if(i <= m)
		for( ; i <= m; ) 
			TR[k++] = SR[i++];
	if(j <= t)
		for( ; j <= t; )  
			TR[k++] = SR[j++];
}