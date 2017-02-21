#include <stdio.h>

void change_ptr(int *p) //在C中，所有的函数的参数的传递都是值传递。值传递：就是将实际参数的值的副本传递给形式参数，所以形式参数的值的改变，并不会影响到实际参数的值。
{
	p = NULL;
}

//如果需要修改调用函数里的普通变量的值，那么需要传递给被调用函数该变量的地址；如果需要修改调用函数里的指针的值（指向），那么也需要传递给被调用函数该指针变量的地址。
void change_ptr2(int **p)
{
	printf("changer_ptr2: *p = %p\n", *p); //*p(也就是main函数里的q)里面保存的是main函数里的a变量的地址
	*p = NULL;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap_2(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap_3(int *a, int *b)
{
	int *tmp = a;
	a = b;
	b = tmp;
}

void swap_4(int a, int b)
{
	int *tmp = &a;
	a = b;
	b = *tmp;
}

void swap_5(int *a, int *b)
{
	int *tmp = a;
	*a = *b;
	*b = *tmp;
}

int main(void)
{
	{
	int **pp;
	int *p;
	int a = 10;

	p = &a;
	pp = &p;

	printf("*pp = %p\n", *pp);
	printf("p = %p\n", p);
	printf("&a = %p\n", &a);
	
	printf("pp = %p\n", pp);
	printf("&p = %p\n", &p);
	
	printf("a = %d, %d, %d\n", a, *p, **pp);
	}

	{
		int a = 10;
		int *q = &a;
		printf("q = %p\n", q);
		change_ptr(q);
		printf("change, q = %p\n", q);
		change_ptr2(&q);
		printf("change2, q = %p\n", q);
	}

	{
		int a = 3, b = 4;
		//swap(&a, &b);
		//swap_2(a, b);
		swap_3(&a, &b);
		//swap_4(a, b);
		printf("swap, a = %d, b = %d\n", a, b);
	}

	return 0;
}
