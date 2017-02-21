#include <stdio.h>

//main函数的标准写法二
//argc是通过命令行传递的参数的个数
//argv是指向argv[0]（它的类型是char*）的元素的指针，它的类型是char**
int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	int i = 0;
	for (; i < argc; i++) {
		printf("argv[%d] = %s\n", i, *(argv + i));
	}

	return 0;
}
