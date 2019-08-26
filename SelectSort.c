#include "SelectSort.h"

/*****************************************************
*  函数名称：SelectSort
*  功能说明：简单选择排序(升序)
*  参数说明：SqList* L, L为结构体指针
*  函数返回：void
*  修改时间：2018-8-26   已测试
*  数据存储：数组,链表
*  附加说明：不稳定的(2,2,1)，最好最坏最坏O(n2)，额外空间O(1)
*****************************************************/
void SelectSort(SqList* L)
{
	int i, j, k;
	for(i = 1; i < L->length; i++)
	{
		k = i;
		for(j = i + 1; j <= L->length; j++)
			if(L->r[j] < L->r[k])
				k = j;
		if(k != i)
		{
			L->r[0] = L->r[i];
			L->r[i] = L->r[k];
			L->r[k] = L->r[0];
		}
	}
}

/*****************************************************
*  函数名称：HeapSort
*  功能说明：堆排序(升序)
*  参数说明：SqList* L, L为结构体指针
*  函数返回：void
*  修改时间：2018-8-26   已测试
*  数据存储：只能数组
*  附加说明：不稳定的(7,4,4)，最好最坏平均O(nlogn)，额外空间O(1)
*****************************************************/
void HeapSort(SqList* L)
{
	int i;
	for(i = L->length / 2; i > 0; --i)
		HeapAdjust(L, i, L->length);
	for(i = L->length; i > 1; --i)
	{
		L->r[0] = L->r[i];
		L->r[i] = L->r[1];
		L->r[1] = L->r[0];
		HeapAdjust(L, 1, i-1);
	}
}

void HeapAdjust(SqList* L, int s, int m)
{
	int j;
	L->r[0] = L->r[s];
	for(j = 2 * s; j <= m; j = j * 2)
	{
		if(j < m && L->r[j] < L->r[j+1])
			++j;
		if(L->r[0] >= L->r[j])
			break;
		L->r[s] = L->r[j];
		s = j;
	}
	L->r[s] = L->r[0];
}