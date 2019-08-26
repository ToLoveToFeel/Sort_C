/*
*
*name:	define.h
*author:	wangxiaoxiao
*data:	2019.8.26
*function:
*
*/
#ifndef DEFINE_H_
#define DEFINE_H_

#define MAX 40	//排序数据的最大个数为20-1，第一项为哨兵项

typedef struct{
	int r[MAX];
	int length;
}SqList;

#include "include.h"	//位置必须在SqList之后，否则错误，错误原因是因为找不到SqList定义

void color(short x);

#endif