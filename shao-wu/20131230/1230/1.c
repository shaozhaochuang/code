#include <stdio.h>

//在C中，函数参数空着不写和写上void表示意义完全不同；空着表示传递的参数的类型和个数不确定
void foo1(void)
{
	printf("%s\n", __func__); //C中内置的宏，打印当前函数名
}

void foo2()
{
	printf("%s\n", __FUNCTION__); //C中内置的宏，打印当前函数名
}

//标准C中main函数的写法一
int main(void)
{
	printf("hello world!\n");

	foo1();
	foo2(10, "hello");
	return 0;
}


