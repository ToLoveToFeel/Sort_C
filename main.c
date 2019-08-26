/*
*
*name:	main.c
*author:	wangxiaoxiao
*data:	2019.8.26
*function:
*
*/

#include "include.h"

int main(void)
{
	SqList L;
	int i;
	int x;
	int d[3]={5, 3, 1};               //希尔排序用到的d
	int exit_flag = 0;	//退出控制
	while(1)
	{
		fflush(stdin);	//清空输入缓冲区
		ui();
		printf("\n请选择你要执行的功能：");
		scanf("%d", &x);
		switch(x)
		{
			case 1: input(&L);  insertSort(&L); output(L);
					system("pause"); 
					break;
			case 2: input(&L);  BinsertSort(&L);  output(L);
					system("pause"); 
					break;
			case 3: input(&L);
					for(i = 0; i <= sizeof(d) / sizeof(d[0]); i++)
						shell(&L, d[i]);
					output(L);
					system("pause"); 
					break;
			case 4: input(&L);  SelectSort(&L);  output(L);
					system("pause"); 
					break;
			case 5: input(&L);  HeapSort(&L);  output(L);
					system("pause"); 
					break;
			case 6: input(&L);  qppx(&L);  output(L);
					system("pause"); 
					break;
			case 7: input(&L);  QSort(&L, 1, L.length);  output(L);
					system("pause"); 
					break;
			case 8: input(&L);  Msort(L.r, L.r, 1, L.length);  output(L);
					system("pause"); 
					break;
			case 9: BucketSort();
					system("pause"); 
					break;
			case 10: exit_flag = 1;
					break;
		}
		if(exit_flag)
			break;
		else
			system("cls");
	}

	return 0;
}