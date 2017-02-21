//任意输入三个数，按从小到大的顺序打印出来
//输出三个数中最大的数

#include <stdio.h>

int main(void)
{
	int a, b, c, t;
	printf("请输入任意三个整数: ");
	scanf("%d%d%d", &a, &b, &c); //scanf在按照此种方式输入时，输入项之间需要用空格、或 制表符、或 回车符来间隔

	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}

	printf("%d %d %d\n", a, b, c);

	//三元运算符 ? :
	//条件表达式 expr1 ? expr2 : expr3  意思是如果expr1表达式为真，那么执行expr2表达式，否则执行expr3表达式

	int max;
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("max = %d\n", max);

	return 0;
}
