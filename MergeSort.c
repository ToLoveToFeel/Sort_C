#include "MergeSort.h"

/*****************************************************
*  �������ƣ�Qsort
*  ����˵�����鲢����(����)
*  ����˵����SR[]ΪҪ��ֵ�����
			 TR1[]Ϊ��������ɵ�����
			 s,tΪ��ѡ�鲢����Χ
*  �������أ�void
*  �޸�ʱ�䣺2018-8-26   �Ѳ���
*  ���ݴ洢��ֻ������
*  ����˵�����ȶ���,O(nlog2n),����ռ�O(n)
*****************************************************/
void Msort(int SR[], int TR1[], int s, int t)    //��SR[s..t]�鲢����ΪTR1[s..t]
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

void Merge(int SR[ ], int TR[ ], int s, int m, int t)     //�����������SR[ s..m]��SR[m+1..t]�鲢Ϊ���������TR[ s..t]
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