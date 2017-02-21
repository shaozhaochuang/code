#include <stdio.h>

int main(void)
{
	int n = 2, day = 0;
	float sum = 0;
	for (; n <= 100; n*=2) {
		sum += 0.8 * n;
		printf("sum = %f\n", sum);
		day++;
	}
	printf("平均每天花: %f\n", sum/day);

	return 0;
}
