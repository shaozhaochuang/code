#include <stdio.h>

int main(void)
{
	int a[10], i = 0;
	printf("请输入10个整型值： ");
	for (; i<10; i++) {
		scanf("%d", a + i);
	}
	int b[sizeof(a)/sizeof(a[0]) - 1];
	int n = sizeof(b)/sizeof(*b);
	for (i=0; i < n; i++) {
		b[i] = a[i] + a[i+1];
	}

	for (i=0; i<n; i++) {
		printf("%3d ", b[i]);
		if (!((i+1)%3)) {
			printf("\n");
		}
	}

	return 0;
}
