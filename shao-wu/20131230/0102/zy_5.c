#include <stdio.h>

int main(void)
{
	int a[10] = {3,2,1,9,7,1,6,8,4,9}, i, min, max;
	printf("交换之前：\n");
	for (i = 0; i<10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
#if 0
	printf("请输入10个整数：\n");
	for (i=0; i<10; i++) {
		scanf("%d", a + i); //&a[i]
	}
#endif
	min = 0;
	max = 0;
	for (i=1; i<10; i++) {
		if (a[i] > a[max]) {
			max = i;
		}
		if (a[i] < a[min]) {
			min = i;
		}
	}
	printf("min = %d, max = %d\n", min, max);
	printf("a[min] = %d, a[max] = %d\n", a[min], a[max]);

	int tmp = a[min];
	a[min] = a[max];
	a[max] = tmp;
	printf("a[min] = %d, a[max] = %d\n", a[min], a[max]);

	printf("交换最大和最小值之后，数组元素为：\n");
	for (i=0; i<10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
