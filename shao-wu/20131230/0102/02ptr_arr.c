#include <stdio.h>

int main(void)
{
	{
	char s[] = "hello";

	//ps的类型是char (*)[6]
	char (*ps)[sizeof(s)/sizeof(s[0])]; //数组指针：指向数组的指针
	ps = &s;

	char *p = s;
	*p = 'H';
	printf("s = %s\n", s);
	//当编译器不能自动转换类型时，需要我们手工强转，被称为强制类型转换。
	//(type)p; 将p强转为type类型
	printf("ps = %s\n", (char *)ps);
	}

	{
		//指针数组：元素类型是指针类型的数组
		//s是指向char*类型的指针，它的类型是char **
		char *s[] = {"hello", "world", "linux"};
		printf("%c\n", *(s[1] + 1));
		printf("%s\n", *s + 1);
		printf("%c\n", *(*s + 1));
		printf("%s\n", *(s + 1));
	}

	return 0;
}
