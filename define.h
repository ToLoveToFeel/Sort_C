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

#define MAX 40	//�������ݵ�������Ϊ20-1����һ��Ϊ�ڱ���

typedef struct{
	int r[MAX];
	int length;
}SqList;

#include "include.h"	//λ�ñ�����SqList֮�󣬷�����󣬴���ԭ������Ϊ�Ҳ���SqList����

void color(short x);

#endif