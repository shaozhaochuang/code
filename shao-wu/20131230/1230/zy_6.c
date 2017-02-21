#include <stdio.h>

int main(void)
{
	float high = 100, sum = high;
	int i;
	for (i = 0; i < 9; i++) {
		high /= 2;
		sum += high;
	}
	printf("第10次落下时，经过的路程 = %f\n", sum);
	printf("第10次反弹的高度 = %f\n", high/2);

	return 0;
}
