//任意输入两个整数x和y，计算x^y的最后三位数

#include <stdio.h>

int main(void)
{
	int x, y, ret = 1;
	printf("请输入任意两个整数: ");
	scanf("%d,%d", &x, &y);

	int i = 0;
	for (; i < y; i++ ) {
		ret = ret * x % 1000;
	}

	if (ret >= 100) {
		printf("%d^%d的最后三位数 = %d\n", x, y, ret);
	} else if (ret < 10 && ret >= 1) {
		printf("%d^%d的最后三位数 = 00%d\n", x, y, ret);
	} else {
		printf("%d^%d的最后三位数 = 0%d\n", x, y, ret);
	}
	return 0;
}
