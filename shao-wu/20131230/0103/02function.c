#include <stdio.h>

//函数：具有独立功能的语句序列组成的模块

//使用函数的好处：
//1、减少重复劳动
//2、易于维护
//3、代码的复用
//4、隐藏实现细节，对外只提供有限的接口
//5、对于从事商业活动所写的代码起到了很好的保护性

//seqence函数的类型是：void (int*, int*, int*)
//函数原型提供给函数调用的依据：函数的返回值的类型，函数的参数的类型和参数的个数
//函数的调用在函数定义之前时，必须写函数的原型声明
//声明可以有多个，但是必须在调用之前出现
void sequence(int *, int *, int *); //函数原型声明
int main(void)
{
	void sequence(int *, int *, int *); //函数原型声明
	int a = 33, b = 35, c = 20;
	void sequence(int *, int *, int *); //函数原型声明
	sequence(&a, &b, &c);	//函数调用
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}

void sequence(int *a, int *b, int *c)  //函数定义
{
	int min, mid, max;
	max = *a > *b ? (*a > *c ? *a : *c) 
		: (*b > *c ? *b : *c);
	min = *a < *b ? (*a < *c ? *a : *c) 
		: (*b < *c ? *b : *c);
	mid = *a > *b ? 
		(*a > *c ? (*b > *c ? (*b) : (*c)) : (*a)) 
		:  
    	(*b < *c ? (*b) : (*a < *c ? (*c) : (*a)));

	*a = min;
	*b = mid;
	*c = max;
}
