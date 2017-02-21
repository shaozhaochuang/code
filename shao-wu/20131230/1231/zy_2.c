#include <stdio.h>

#define LEN 6
int main(void)
{
	int a[LEN], i;
	printf("请输入任意%d个整数: ", LEN);
	for (i = 0; i < LEN; i++) {
		scanf("%d", a + i);
	}
	
	int tmp;
	for (i = 0; i < LEN/2; i++) {
		tmp = a[i];
		a[i] = a[LEN - 1 - i];
		a[LEN - 1 - i] = tmp; 
	}

	for (i = 0; i < LEN; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
