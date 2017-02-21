#include <stdio.h>

int main(void)
{
	char c;
	printf("请输入任意一个字符: ");
	scanf("%c", &c);
	
	switch (c) {
	case '0' ... '9':
		printf("你输入的是数字!\n");
		break;
	default:
		printf("你输入的不是数字，也不是字母!\n");
		break;
	case 'A' ... 'Z':
	case 'a' ... 'z':
		printf("你输入的是字母!\n");
		break;
	}

	//break只有两个作用：1跳出循环；2跳出switch...case
	//default 分支通常作为最后一个分支存在，表示之前的所有情况都没有匹配成功，此时会进入default分支。也只有default分支作为最后一个分支时，break才可以省略。

	return 0;
}
