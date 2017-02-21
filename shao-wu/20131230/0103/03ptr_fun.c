#include <stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	//pf是函数指针
	int (*pf)(int, int) = max;
	printf("max = %d\n" , pf(3, 4));

	pf = min;
	printf("min = %d\n" , pf(3, 4));

	//pfa是函数指针数组
	int (*pfa[])(int, int) = {max, min};
	int i = 0;
	for (; i < sizeof(pfa)/sizeof(pfa[0]); i++) {
		//printf("value = %d\n", pfa[i](3, 4));
		printf("value = %d\n", (*(pfa + i))(3, 4));
	}

	return 0;
}
