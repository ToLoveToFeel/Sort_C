#include "SelectSort.h"

/*****************************************************
*  �������ƣ�SelectSort
*  ����˵������ѡ������(����)
*  ����˵����SqList* L, LΪ�ṹ��ָ��
*  �������أ�void
*  �޸�ʱ�䣺2018-8-26   �Ѳ���
*  ���ݴ洢������,����
*  ����˵�������ȶ���(2,2,1)�������O(n2)������ռ�O(1)
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
*  �������ƣ�HeapSort
*  ����˵����������(����)
*  ����˵����SqList* L, LΪ�ṹ��ָ��
*  �������أ�void
*  �޸�ʱ�䣺2018-8-26   �Ѳ���
*  ���ݴ洢��ֻ������
*  ����˵�������ȶ���(7,4,4)������ƽ��O(nlogn)������ռ�O(1)
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