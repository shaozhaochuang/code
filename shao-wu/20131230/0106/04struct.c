#include <stdio.h>

#if 0
数组和结构体：
	数组是相同类型的元素的集合，元素是连续存放的，元素是通过偏移量来获得的
	结构体是不同或同种类型的元素的集合，元素在结构体中称为成员，成员是通过->或.来获取的
#endif

//内存对齐规则：
//1、成员所在的地址必须是在其自身长度的整数倍的地址上；
//2、最后一个成员负责整个结构体占据的大小是cpu字长的整数倍

//用来改变系统默认的内存对齐系数
#pragma pack(1) //()中可以填1、2、4，也可以空着（表示恢复默认值4）
struct foo {
	char c;
	int a;
	short b;
};

int main(void)
{
	//用于打印当前对齐系数
	printf("对齐系数 = %d\n", __alignof__(struct foo));
	printf("size struct foo = %d\n", sizeof(struct foo));

	struct foo f1 = {'c', 10, 5};
	printf("f1.b = %hd\n", f1.b);

	struct foo f2 = {
		.c = 'A',
	};
	printf("f2.a = %d\n", f2.a);

	struct foo f3;
	f3.c = 'B';
	printf("f3.a = %d\n", f3.a);

	struct foo f4 = {
		a: 1, c: 0, b: 12,
	};
	printf("f4.c = %d\n", f4.c);

	f3 = f4; //结构体唯一支持的运算操作
#if 0
	if (f3 == f4) { //不支持判等操作，只能对其中的成员来判等
  		printf("equal!\n");
	} else {
  		printf("not equal!\n");
	}
#endif
	{
		int a[3] = {1,2,3};
		int b[3];
		//b = a;
	}

	struct foo *pf;
	pf = &f4;
	printf("pf-> :%d, %d, %d\n", pf->a, pf->b, pf->c);
	printf("(*pf). :%d, %d, %d\n", (*pf).a, pf->b, pf->c);

	return 0;
}
