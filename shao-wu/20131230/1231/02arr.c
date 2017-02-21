#include <stdio.h>


int main(void)
{
	typedef int elem_t;

	int a[5]; //数组类型，int [5]
	size_t b; //32位系统，size_t <==> unsigned int; 64位系统， size_t <==> unsigned long 
	ssize_t c; //32位系统，ssize_t <==> signed int; 64位系统，ssize_t <> signed long
	printf("size a = %u\n", sizeof(a)); //sizeof是运算符，不是函数。用来计算某类型的变量在内存中占据的大小的

	typeof(a) d; //typeof也是运算符，用来取出某变量的类型的
	
	printf("size d = %d\n", sizeof(d));

	//a = {1,2,3,4,5}; //数组在声明之后不能整体赋值

	int i = 0;
	for (; i < 5; i++) {
		a[i] = i;
	}

	for (i = 0; i < 5; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	int s[5] = {1,2,3,4,5}; //在声明的同时进行赋值，被称为初始化

	printf("&a[0] = %p\n", &a[0]);
	printf("a = %p\n", a);
	printf("&a = %p\n", &a);

	//a++; //error. 左值：放在赋值号左边的就是左值；它表示的是内存中一个固定的地址，所以不能执行类似++操作

	int *p = a; //定义指向数组首元素的指针，此时a表示的是右值，表示它所代表的那个内存中的值
	printf("*p = %d\n", *p); //间接访问，也被称为解引用指针，意思是不是直接通过变量名来访问变量，而是通过指向该变量的指针进行访问，所以是间接访问。

	p++;
	printf("p++, *p = %d\n", *p);

	return 0;
}
