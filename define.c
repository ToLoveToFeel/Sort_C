/*
*
*name:	define.c
*author:	wangxiaoxiao
*data:	2019.8.26
*function:
*
*/
#include "define.h"

/******************************************
@name: color
@function: �Զ��庯���ݲ����ı���ɫ
@para: x    ������ɫ
			 0	��ɫ   1  ��ɫ   2  ��ɫ   3  ����ɫ
			 4  ��ɫ   5  ��ɫ   6  ��ɫ   7  ��ɫ
			 8  ��ɫ   9  ����ɫ 10 ����ɫ 11 ��ǳ��ɫ
			 12 ����ɫ 13 ����ɫ 14 ����ɫ 15 ����ɫ
			 ����15�ָ�ԭ������ɫ
@return value:
******************************************/
void color(short x)
{  
    if(x>=0 && x<=15)	//������0-15�ķ�Χ��ɫ  
		  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);    //ֻ��һ���������ı�������ɫ   
    else				//Ĭ�ϵ���ɫ��ɫ  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);  
}