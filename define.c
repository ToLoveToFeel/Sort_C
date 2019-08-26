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
@function: 自定义函根据参数改变颜色
@para: x    字体颜色
			 0	黑色   1  蓝色   2  绿色   3  湖蓝色
			 4  红色   5  紫色   6  黄色   7  白色
			 8  灰色   9  淡蓝色 10 淡绿色 11 淡浅绿色
			 12 淡红色 13 淡紫色 14 淡黄色 15 亮白色
			 大于15恢复原来的颜色
@return value:
******************************************/
void color(short x)
{  
    if(x>=0 && x<=15)	//参数在0-15的范围颜色  
		  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);    //只有一个参数，改变字体颜色   
    else				//默认的颜色白色  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);  
}