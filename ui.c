#include "ui.h"

void ui(void)
{
	int i;
	for(i=0; i<8; i++)
	{

		printf("---");
	}
	printf("界面");
	for(i=0; i<7; i++)
	{

		printf("---");
	}
	color(4); printf("\n请输入整数进行排序！"); color(7);
	printf("\n\t1.直接插入排序");
	printf("\n\t2.二分插入排序");
	printf("\n\t3.希尔排序");
	printf("\n\t4.简单选择排序");
	printf("\n\t5.堆排序");
	printf("\n\t6.冒泡排序");
	printf("\n\t7.快速排序");
	printf("\n\t8.归并排序");
	printf("\n\t9.桶排序");
	printf("\n\t10.退出程序.\n");
	for(i=0; i<10; i++)
	{
	
		printf("-----");
	}
}

/*****************************************************
*  函数名称：input
*  功能说明：待排序数据输入
*  参数说明：SqList &L, L为结构体
*  函数返回：void
*  修改时间：2018-6-3   已测试
*****************************************************/
void input(SqList* L)
{
	int i;
	printf("你要输入的数据的个数：");
	scanf("%d", &L->length);
	for(i=1; i<=L->length; i++)
	{
		printf("请输入第%d个数据:", i);
		scanf("%d", &L->r[i]);
	}
}

/*****************************************************
*  函数名称：output
*  功能说明：待排序数据输出
*  参数说明：SqList L, L为结构体
*  函数返回：void
*  修改时间：2018-6-3   已测试
*****************************************************/
void output(SqList L)
{
	int i;
	printf("升序为：");
	for(i=1; i<=L.length; i++)
		printf("%d  ", L.r[i]);
	printf("\n");
}