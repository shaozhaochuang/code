#include <stdio.h>
#include <string.h>

int main(void)
{
	//s既是字符数组，也是字符串
	//字符串：最后一个元素是'\0'
	char s[4] = {'1','2','3'};
	char t[4] = {'1', '2', '3', '4'}; //t仅仅是字符数组，不是字符串

	char arr[5] = "hell"; //字符数组赋值

	printf("%c, %d\n", s[3], s[3]);

	//strlen是系统库函数，用来计算字符串的有效长度，不包括字符串结尾的'\0'
	printf("strlen(s) = %d\n", strlen(s));
	printf("strlen(t) = %d\n", strlen(t));

	printf("sizeof(s) = %d\n", sizeof(s));
	printf("sizeof(t) = %d\n", sizeof(t));

	char arr2[5];
	arr2[0] = 'A';
	arr2[4] = 'Z';
	printf("arr2[1] = %c\n", arr2[1]); //声明之后部分赋值，未赋值元素的值是垃圾值

	return 0;
}
